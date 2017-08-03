#include <mpi.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char* argv[])
{
  int me, ranks, i, j;
  int size, tag;
  float s_buf[10];
  float r_buf[10];
  MPI_Status reqstat;
  
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &ranks);
  MPI_Comm_rank(MPI_COMM_WORLD, &me);
  
  size = 10;
  tag = 1;
  if(ranks != 2) {
    if(!me) printf("This test requires exactly two processes\n");
    MPI_Finalize();
    return 0;
  }
  
  if(me) {
    for(i=0; i<10; i++)
       s_buf[i] = i*4.0;
    MPI_Send(s_buf, size, MPI_FLOAT, 0, tag, MPI_COMM_WORLD);
  }
  else {
    MPI_Recv(r_buf, size, MPI_FLOAT, 1, tag, MPI_COMM_WORLD, &reqstat);
    for (i = 0; i < 10; i++ ){
      printf("r_buf[%d] = %f\n", i, r_buf[i] );
    }
  }
  MPI_Finalize();

  return 0;
}
