#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int i,n,c=0;
    string s,t,r;
    cin>>s;
    cin>>t;

    n=t.size();

    reverse(s.begin(),s.end());

    for(i=0;i<n;i++)
    {
        if(s[i]==t[i])
            c++;
    }

    if(c==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
