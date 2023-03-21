#! /bin/sh


./build.sh

cd ../build/ ; cmake --install . --config Debug
