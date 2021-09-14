
require 'sinatra'

set :server, :thin

get '/' do
  File.read("index.html")
end

get '/main.wasm' do
  content_type 'application/wasm'
  File.read("main.wasm")
end

get '/main.html' do
  File.read("main.html")
end

get '/main.js' do
  content_type 'application/javascript'
  File.read("main.js")
end
