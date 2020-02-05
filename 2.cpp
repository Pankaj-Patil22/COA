#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int conver(int a)
{
    if(a==000)
    return 0;
    if(a==001)
    return 1;  
    if(a==010)
    return 2;   
    if(a==011)
    return 3;    
    if(a==100)
    return 4;    
    if(a==101)
    return 5;    
    if(a==110)
    return 6;
    if(a==111)
    return 7; 
}

int b2o(int d)
{
    int i=0,c=0,m=0,r,s1=0,s2=0,oct=0;
    while(d>0)
    {
        while(c<3)
        {
            if(d>0)
            {
                r=d%10;
                d=d/10;
                s1=s1+r*pow(10,i);
            }
            i++;
            c++;
        }
        s2=conver(s1);
        oct=oct+s2*pow(10,m);
        m++;
        c=0;
        i=0;
        s1=0;
    }
    return oct;
}

int main()
{
    int n;
    cout<<"Give the binary no\n";
    cin>>n;
    cout<<"The octal equivalent of "<<n<<" is "<<b2o(n);
    return 0;
}