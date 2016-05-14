#!/bin/zsh 
#compile the project

echo "\n-------- we are compile and build the DBdriver project --------\n"


#enter the build dir
cd build

#run cmake 
cmake ..

#run make 
make -j4 

make install 

echo "\n-------- we are run the testDB and the prints are followed --------\n"

#run the testDB

cd ../bin

./rtabmap-TestPostgresql

echo "\n"




