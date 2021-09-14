
A simple example of calling Lua via WASM in your web browser.

Run `make` to build. This also builds the `lua-5.4.0` subdirectory,
which is simply [Lua 5.4](https://github.com/lua/lua/tree/v5.4.0) with
the makefile slightly modified to work with this.

`make` will produce a `main.js` file. To run the server, use `ruby
server.rb` (depends on [Sinatra](http://sinatrarb.com/)), then
navigate to `localhost:8080` in your favorite web browser. The number
42 should appear twice in your browser console. The first is from C,
and the second is from Lua.
