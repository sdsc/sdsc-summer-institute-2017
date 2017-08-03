#include <omp.h>

#define SIZE 100000
#define ITERATIONS 10
#define VEC_LENGTH (SIZE/ITERATIONS)
#define DELX 0.1
#define DELT 0.0001
#define XALP 2
#define COEFF (XALP*DELT/(DELX*DELX))


#include <math.h>

int main(int argc, char* argv[])
{
  double T[ITERATIONS][SIZE+1];

  int nthreads = omp_get_num_threads();
  printf("There are %d threads\n", nthreads);

  double delx = 1.0/SIZE;
  double delt = 0.0001;
  double xalp = 2;

  // Setting some initial conditions
  int i;
  for(i=0; i<SIZE+1;++i) {
    T[0][i] = sin(M_PI*delx*i);
  }

  double timer = omp_get_wtime();

  int t;
  for(t=1; t<ITERATIONS;++t) {
    printf("Iteration %d\n",t);
    #pragma omp parallel for private(i)
    for(i=1;i<SIZE;++i)
        T[t][i]=T[t-1][i]+COEFF*(T[t-1][i-1]-2*T[t-1][i]+T[t-1][i+1]);
    
  }
  timer = omp_get_wtime()-timer;

  for(i=0;i<SIZE;i+=SIZE/10)
    printf(" %f", T[ITERATIONS-1][i]);
  printf("\nTime = %f\n", timer);

  return 0;
}
