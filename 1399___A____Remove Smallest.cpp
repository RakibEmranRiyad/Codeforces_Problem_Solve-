#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,t,p=1;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        p=0;
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1)
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
