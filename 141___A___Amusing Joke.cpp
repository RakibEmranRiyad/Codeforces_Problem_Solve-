#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t,r,v;
    cin>>s;
    cin>>t;
    cin>>r;

    s+=t;
    sort(s.begin(),s.end());
    sort(r.begin(),r.end());

    if(s==r)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
