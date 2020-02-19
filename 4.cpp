#include<iostream>
#include<cmath>

using namespace std;

int o;

void d2h(int dec)
{
    char hex[100];

    int t=dec,r,i=1,j;

    while(t!=0)
    {
        r=t%16;
        if(r<10)
            hex[i++]=r+48;
        else
            hex[i++]=r+55;

        t=t/16;
    }
    cout<<"Hexadecimal equivalent of "<<o<<" is ";
    for(j=i-1;j>0;j--)
        cout<<hex[j];
}

void o2h()
{
    int d=0,r,n=o,i=0;

    while(n!=0)
    {
        r=n%10;
        if(r>7)
        {
            cout<<"The nuber is not octal\n";
            return;
        }

        n=n/10;

        d=d+r*pow(8,i++);
    }

    d2h(d);
}

int main()
{
    cout<<"Give the octal number\n";
    cin>>o;
        o2h();
}