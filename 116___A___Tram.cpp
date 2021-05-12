#include<iostream>

using namespace std;

int main()
{
    int n,a,b,s=0,i=0,m;
    cin>>n;
    int t[n],c=n;

    while(n--)
    {
        cin>>a>>b;
        s=s-a+b;
        t[i]=s;
        i++;
    }

    m=t[0];

    for(i=0;i<c-1;i++)
    {
        if(m<=t[i+1])
        {
            m=t[i+1];
        }
    }
    cout<<m<<endl;

    return 0;
}
