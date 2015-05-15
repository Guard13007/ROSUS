#!/bin/bash

mkdir -p ./bin

g++ ./src/Google.cpp -o ./bin/google
g++ ./src/How.cpp -o ./bin/how
g++ ./src/Ubify.cpp -o ./bin/ubify

sudo cp ./bin/google /bin/google
sudo cp ./bin/how /bin/how
sudo cp ./bin/ubify /bin/ubify
