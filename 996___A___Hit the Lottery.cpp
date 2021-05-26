#include<iostream>

using namespace std;

int main()
{
    long int n,r,s=0;
    cin>>n;

    while(n)
    {
        if(n>=100)
        {
            r=n%100;
            n=n/100;
            s+=n;
            n=r;
        }
        else if(n>=20 && n<100)
        {
            r=n%20;
            n=n/20;
            s+=n;
            n=r;
        }
        else if(n>=10 && n<20)
        {
            r=n%10;
            n=n/10;
            s+=n;
            n=r;
        }
        else if(n>=5 && n<10)
        {
            r=n%5;
            n=n/5;
            s+=n;
            n=r;
        }
        else if(n>=1 && n<5)
        {
            r=n%1;
            n=n/1;
            s+=n;
            n=r;
        }
    }
    cout<<s<<endl;

    return 0;
}
