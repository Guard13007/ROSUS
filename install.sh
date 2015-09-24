#!/bin/bash

echo "Installing ROSUS..."

#TODO add check so that it doesn't assume an empty directory means everything has been built
if [ ! -d ./bin ]
  then
    ./build.sh
    if [[ $? -ne 0 ]]
      then
        echo "Build failed! Abandoning install."
        exit 1
    fi
fi

sudo cp ./bin/google /bin/google
sudo cp ./bin/how /bin/how
sudo cp ./bin/ubify /bin/ubify
sudo cp ./bin/deubify /bin/deubify

echo "ROSUS installed!"
