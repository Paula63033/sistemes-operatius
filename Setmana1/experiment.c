#include <assert.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>


int foo(){
  return(10);
}

long nanosec(struct timeval t){
  return((t.tv_sec*1000000+t.tv_usec)*1000);
}

int main(){
  int i,j,res,res2;
  long N_iterations=1000000;
  float avgT1, avgT2, avgTest;
  struct timeval t1, t2;

  /* Find average time for Function call */
  res=gettimeofday(&t1,NULL);  assert(res==0);
  for (i=0;i<N_iterations; i++){
    j=foo();
  }

  res=gettimeofday(&t2,NULL);   assert(res==0);
  avgT2 = (nanosec(t2) - nanosec(t1))/(N_iterations*1.0);

  res2 = pow(4,2);              
  avgTest = res2/(N_iterations*1.0);
  

  printf("Time for getDay method: %f\n", avgT2);
  printf("Time for pow method: %f\n", avgTest);


}
