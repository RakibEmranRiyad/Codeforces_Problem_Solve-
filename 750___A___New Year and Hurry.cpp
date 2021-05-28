#include<iostream>

using namespace std;

int main()
{
    int n,k,t=0,i,p=0;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        t+=5*i;
        if((t+k)<=240)
        {
            p++;
        }
    }
    cout<<p<<endl;

    return 0;
}
