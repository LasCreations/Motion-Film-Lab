#! /bin/sh



DIR="../build"
 
if [ -d "$DIR" ]; then
  echo "Found Build Directory"
  #cd $DIR
  else
  echo "Creating Build Directory ..."
  ###  Control will jump here if $DIR does NOT exists ###
  mkdir ../build
fi

cd ../build/ ; cmake -DCMAKE_BUILD_TYPE=Debug -S ..; cmake --build .
