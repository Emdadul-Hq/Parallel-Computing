#include"omp.h"
#include<stdio.h>
void main()
{
omp_set_num_threads(8);
#pragma omp parallel
    {
    int ID= omp_get_thread_num();
    printf("A(%d)\n",ID);
    }
printf("all done\n");
}
