#! /bin/sh

cd ../ ; rm -rf build data

FILE=/usr/local/bin

if test -f "$FILE"; then
    cd /usr/local/bin ; sudo rm MFL
fi

