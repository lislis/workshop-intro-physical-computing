#!/usr/bin/env node

import { Server } from 'node-osc';

const args = process.argv.slice(2);

const port = args[0] ? args[0] : 3333;

var oscServer = new Server(port, '0.0.0.0', () => {
  console.log(`OSC Server is listening on port ${port}`);
});

oscServer.on('message', function (msg) {
  console.log(`Message: ${msg}`);
  //oscServer.close();
});
