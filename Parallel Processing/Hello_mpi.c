#include<stdio.h>
#include<mpi.h>

int main(void){

    MPI_Init(NULL,NULL);
    printf("Hello\n");

    MPI_Finalize();
return 0;
}

