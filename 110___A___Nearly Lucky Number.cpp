#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int r,c=0;
    long long int n;
    cin>>n;

    while(n)
    {
        r=n%10;
        n/=10;
        if(r==4 || r==7)
            c++;
    }
    if(c==4 || c==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
