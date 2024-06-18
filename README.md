# Make HTTP requests from inside WASM in C using Emscripten

This devcontainer is configured to provide you a latest stable version of Emscripten.

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/wasm-outbound-http-examples/emscripten)

The following examples allow you to build a browser ones (the same as related demo).

<table>
<tr>
<th>#</th>
<th>Example</th>
<th>Description</th>
<th>Browser demo</th>
</tr>
<tr>
<td>1</td>
<td>

[Using callbacks](browser-callbacks/README.md)

</td>
<td>

`emscripten_fetch()` with `onsuccess` and `onerror` callbacks

</td>
<td>

[Demo](https://wasm-outbound-http-examples.github.io/emscripten/callbacks/)

</td>
</tr>
<tr>
<td>2</td>
<td>

[EMSCRIPTEN_FETCH_SYNCHRONOUS](browser-sync-xhr/README.md)

</td>
<td>

`emscripten_fetch()` employing sync XHR

</td>
<td>

[Demo](https://wasm-outbound-http-examples.github.io/emscripten/sync-xhr/)

</td>
</tr>
</table>

<sub>Created for (wannabe-awesome) [list](https://github.com/vasilev/HTTP-request-from-inside-WASM)</sub>
