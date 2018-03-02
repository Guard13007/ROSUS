#!/bin/bash

echo "Building ROSUS..."

mkdir -p ./bin

if which g++;
  then
    g++ ./src/Google.cpp -o ./bin/google
    g++ ./src/How.cpp -o ./bin/how
    g++ ./src/Ubify.cpp -o ./bin/ubify
    g++ ./src/DeUbify.cpp -o ./bin/deubify
    g++ ./src/Kerbify.cpp -o ./bin/kerbify
    g++ ./src/now.cpp -o ./bin/now
    if [ -f ./a.out ]
      then
        rm ./a.out
    fi
    echo "Build complete."
  else
    echo "Please install gcc and then attempt building again."
    exit 1
fi
