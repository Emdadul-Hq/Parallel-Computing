#include <stdio.h>
#include "omp.h"
int main ()
{
omp_set_num_threads(5);
    #pragma omp parallel
  {
    int id =omp_get_thread_num();
    printf ("Hello (%d)",id);
    printf ("World (%d)\n",id);
  }
    return 0;
}
