# Use callbacks in C program compiled with Emscripten to send HTTP(s) requests from inside WASM

## Instructions for this devcontainer

Tested with Emscripten [v3.1.61](https://github.com/emscripten-core/emscripten/tree/3.1.61).

### Preparation

1. Open this repo in devcontainer, e.g. using Github Codespaces.
   Type or copy/paste following commands to devcontainer's terminal.

### Building

1. `cd` into the folder of this example:

```sh
cd browser-callbacks
```

2. Compile the example using Emscripten:

```sh
emcc -s FETCH=1 --proxy-to-worker -o main.js main.c
```

This command will output `main.wasm`, `main.js`, and `main.worker.js`. 

### Test with browser

1. Run simple HTTP server to temporarily publish project to Web:

```sh
python3 -m http.server
```

Codespace will show you "Open in Browser" button. Just click that button or
obtain web address from "Forwarded Ports" tab.

2. As `index.html`, JS files, and a 21k-sized `main.wasm` are loaded into browser, refer to browser developer console
   to see the results.


### Finish

Perform your own experiments if desired.
