#include <iostream>
#include <math.h>
#include "omp.h"
using namespace std;
int main()
{
int i, found=0,t_num;
long long num,n;
double start, stop;
cout<< "Enter a number for check prime:";
cin>>num;
n=sqrt(num);
cout<< "Enter the value of requested threads: ";
cin>>t_num;
omp_set_num_threads(t_num);
if((num==0)||(num==1))
    {
    cout<<num<< " is a simple number."<<endl;
    found=2;
    }
else
    {
    start=omp_get_wtime();
    #pragma omp parallel
    {
    for(i=2; i<=n; i++)
        {
        if(num%i==0)
        {
        found=1;
        break;

        }
        }
    }
    stop=omp_get_wtime();
    cout<< "Total parallel execution time: " <<stop-start<<endl;
    }
if(found==0)
cout<<num<<" is a prime number."<<endl;
else if (found==1)
cout<<num<<" is not a prime number."<<endl;
else
{
}
main();
}
