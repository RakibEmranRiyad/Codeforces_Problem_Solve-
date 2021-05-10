#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    int i,n,j=0,p=0;
    cin>>s;

    for(i=0;i<s.size();i++)
    {
        for(j=0;j<s.size();j++)
        {
            if(s[i]<s[j])
            {
                swap(s[i],s[j]);
            }
        }
    }

    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
            continue;
        else
            p++;

    }

    if(p%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}

