#include<stdio.h>
#include<mpi.h>
double f(double x){
   return x*x*x;
}
int main(){
   int n=10,local_n,comm_rank,comm_size;
   double a=0,b=3,local_left,local_right,x,total_area,h;
   MPI_Init(NULL,NULL);
   MPI_Comm_size(MPI_COMM_WORLD,&comm_size);
   MPI_Comm_rank(MPI_COMM_WORLD,&comm_rank);
   h = (b-a)/(double)n;
   local_n=n/comm_size;
   local_left = a+comm_rank*local_n*h;
   local_right = local_left+local_n*h;
   x=f(local_left)+f(local_right)/2.0;
   for(int i=1;i<local_n;i++){
      x= x+f(local_left+i*h);
   }
   x=x*h;
   MPI_Reduce(&x, &total_area, 1, MPI_DOUBLE, MPI_SUM, 0,MPI_COMM_WORLD);
   if(comm_rank==0) printf("Area: %lf",total_area);
   MPI_Finalize();
   return 0;
}