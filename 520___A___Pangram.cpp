#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int c=0,n,i;
    string s;
    cin>>n;
    cin>>s;

    for(i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s.begin(),s.end());

    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
            c++;
    }

    if(c==26)
        cout<<"YES"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
