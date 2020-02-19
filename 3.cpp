#include<iostream>
#include<cmath>

using namespace std;

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
    cout<<"Hexadecimal equivalent of "<<dec<<" is ";
    for(j=i-1;j>0;j--)
        cout<<hex[j];
}

int main()
{
    cout<<"Give the decimal number\n";
    int n;
    cin>>n;

    d2h(n);

    return 0;
}