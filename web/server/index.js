'use strict';

const { spawn } = require('child_process');
const bodyParser = require('body-parser');
const express = require('express');
const app = express();

app.use(bodyParser.json());

// const game = spawn('..\\app\\Debug\\BmoreAdventure.exe');

let games = [];

let findGame = (req, res, next) => {
    let command = req.body.command;

    

    games.find((session) => {
        if (session.id == req.params.id) {
            let game = session.gameInstance;
            game.stdin.write(command)
            game.stdout.once('data', (output) => {
                res.send(output);
                res.end();
            });
        }
    });
    next();
}

let handleNoGame = (req, res) => {
    res.send('No game found.')
}

app.get('/start', (req, res) => {
    const game = spawn('..\\app\\Debug\\BmoreAdventure.exe');

    let gameSession = {
        gameInstance: game,
        id: games.length
    };
    games.push(gameSession);
    res.send(gameSession.id.toString());
});

app.post('/:id', findGame, handleNoGame);

app.listen(3000, () => {
    console.log('Listening on port 3000.');
});