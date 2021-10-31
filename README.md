All command here
Many types environment setup system for run mpi programming here

Vedio for set up Windows subsystem and run mpi

1 windows sub system setup

2. run c program

3. openmp mpi hello world run

This is the basic of openmp and mpi with ful setup description .

for openmp:

compile: gcc -fopenmp filename.c -o filename.out

run : ./filename.out

source code: https://drive.google.com/file/d/1CoAjsOqHYPr5xNdLrsea2JbZ4B46ezfS/view

for mpi:

setup :

$ sudo apt-get update
$ sudo apt install build-essential
$sudo apt-get upgrade

$ sudo apt-get install libopenmpi-dev

$ sudo apt-get install openmpi-bin

compile: mpicc filename.c -o filename

run : mpirun -np 4 ./filename

run(default) : mpirun ./filename

source code: https://drive.google.com/file/d/18JonHpnwjVPe1q0ig17y9KP2_S-LbvMN/view
