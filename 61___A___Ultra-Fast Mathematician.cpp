#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    string a,b;
    int i,r[100];

    cin>>a>>b;

    for(i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
            r[i]=1;
        else
            r[i]=0;
        cout<<r[i];
    }

    return 0;
}
