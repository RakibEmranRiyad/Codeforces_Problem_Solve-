#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,i,p=0,m=0,l;
    string s;
    cin>>n;

    while(n--)
    {
        cin>>s;
        l=s.size();
        if(l>10)
        {
            cout<<s[0]<<l-2<<s[l-1]<<endl;
        }
        else
            cout<<s<<endl;
    }

    return 0;
}
