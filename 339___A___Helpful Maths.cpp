#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    int i,j;
    string s;
    char t;

    cin>>s;

    for(i=0;i<s.size();i+=2)
    {
        for(j=i+2;j<s.size();j+=2)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }

    }

    cout<<s<<endl;
    return 0;
}
