#!/bin/bash

echo "Building ROSUS..."

mkdir -p ./bin

if which g++;
  then
    g++ ./src/Google.cpp -o ./bin/google
    g++ ./src/How.cpp -o ./bin/how
    g++ ./src/Ubify.cpp -o ./bin/ubify
    echo "Build complete."
  else
    echo "Please install gcc and then attempt building again."
    exit 1
fi
