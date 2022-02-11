#include <bits/stdc++.h>
using namespace std;
int main()
{
double pi, i, numsteps, stepsize, sum=0.0, x;
cout<<"Enter the number of steps:";
cin>>numsteps;
stepsize=1/numsteps;
for(i=0; i<numsteps; i++)
    {
    x=(i+0.5)*stepsize;
    sum=sum+(4/(1+(x*x)));
    }
pi=sum*stepsize;
cout<<"The value of PI:"<<pi;
return 0;
}
