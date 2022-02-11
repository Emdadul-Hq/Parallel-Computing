#include"omp.h"
#include<stdio.h>
void main()
{
  #pragma omp parallel// creates a parallel region for execution
    {
        int ID = omp_get_thread_num();//returns the number of threads in the current OpenMP region
        printf("hello(%d)",ID);
        printf("world(%d)\n",ID);
    }
}
