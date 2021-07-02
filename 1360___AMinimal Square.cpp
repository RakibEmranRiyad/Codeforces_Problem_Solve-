#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,m,n,s;
        cin>>a>>b;
        m=max(2*a,b);
        n=max(2*b,a);
        s=min(m,n);
        cout<<s*s<<endl;
    }

    return 0;
}
