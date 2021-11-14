#include<bits/stdc++.h>
#include<mpi.h>
using namespace std;

int main(void){
    char str[MAX_STRING];
    int com_sz,com_rank;

    MPI_Init(NULL,NULL);
    MPI_Comm_size(MPI_COMM_WORLD,&com_sz);
    MPI_Comm_rank(MPI_COMM_WORLD,&com_rank);
    printf("Hello")


    MPI_Finalize();

}
