#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double b2d(double bin)
{
    int d=bin,r=0,i=0;
    float s1=0,s2=0;

    while(d!=0)
    {
        r=d%10;
        d=d/10;
        s1=s1+r*pow(2,i);
        i++;        
    }

    
    d=bin;
    bin=bin-d;
    i=1;
    while(bin!=0)
    {
        bin=bin*10;
        d=bin;
        if(d!=0)
        s2=s2+1/pow(2,i);
        i++;
        bin=bin-d;
    }

    return (s1+s2);
}

int main()
{
    double a;
    cout<<"Give the binary number\n";
    cin>>a;
    
    cout<<"The decimal equivalent of "<<a<<" is "<<b2d(a);

    return 0;
}