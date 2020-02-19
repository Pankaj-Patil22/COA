#include<iostream>
#include<math.h>
using namespace std;
void octtobin(int n)
{
    int r,i=0,a[20],rem,c;
    while(n!=0)
    {
        r=n%10;
        if(r>7)
        {
            cout<<"The Number is not Octal\n";
            return ;
        }
        c=0;
        while(c<3)
        {
            rem=r%2;
            a[i++]=rem;
            c++;
            r=r/2;
        }
        n/=10;
    }
    cout<<"The binary equivalent is ";
    for(c=i-1;c>=0;c--)
        cout<<a[c];
}

int main()
{
    int num;
    cout<<"Enter Octal number\n";
    cin>>num;
    octtobin(num);
    return 0;
}
 
