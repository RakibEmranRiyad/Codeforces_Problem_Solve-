#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {

        ll n,s=0;
        cin>>n;

        ll a[n],b[n],i,ma=INT_MAX,mb=INT_MAX;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ma=min(ma,a[i]);
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            mb=min(mb,b[i]);
        }

        for(i=0;i<n;i++)
        {
            s+=max(a[i]-ma,b[i]-mb);
        }
        cout<<s<<endl;
    }

    return 0;
}
