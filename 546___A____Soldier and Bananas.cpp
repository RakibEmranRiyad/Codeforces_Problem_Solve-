#include<iostream>
using namespace std;

int main()
{
    int i,k,a,q,s=0;

    cin>>k>>a>>q;

    for(i=1;i<=q;i++)
    {
        s+=i*k;
    }
    if(s-a<=0)
        cout<<0<<endl;
    else
        cout<<(s-a)<<endl;
    return 0;
}

