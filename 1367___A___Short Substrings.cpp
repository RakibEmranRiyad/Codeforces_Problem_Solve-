#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int i,t,n;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;
        n=s.size();
        string a;
        a+=s[0];
        a+=s[1];

        for(i=3; i<n; i=i+2)
        {
           a+=s[i];
        }
        cout<<a<<endl;
    }

    return 0;
}
