#include<bits/stdc++.h>
#include "omp.h"
using namespace std;
int main()
{
double pi, numSteps, stepSize,sum=0.0;
cout<<"Enter number of steps: ";
cin>>numSteps;
stepSize=1/numSteps;
omp_set_num_threads(4);
#pragma omp parallel
{
int id,i,nThreads;
double X;
id= omp_get_thread_num();
nThreads= omp_get_num_threads();
for(i=id; i<numSteps; i+=nThreads)
{
X=(i+.5)*stepSize;
sum+=4.0/(1+X*X);
}
}
pi= sum*stepSize;
cout<<"\nThe value of pi is: "<<pi;
return 0;
}
