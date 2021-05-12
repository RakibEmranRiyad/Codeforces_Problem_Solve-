#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i,p=0,m=0;
    string s;
    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
            p++;
        else if(s[i]>=97 && s[i]<=122)
            m++;
    }

    if(p<=m)
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
                s[i]+=32;
        }
    }

    else
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<=122)
                s[i]-=32;
        }
    }

    cout<<s<<endl;
    return 0;
}
