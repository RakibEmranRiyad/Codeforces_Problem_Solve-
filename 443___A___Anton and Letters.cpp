#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int i,n,j,c=0,k=0;
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());

    n=s.size();



    for(i=0;i<n-1;i++)
    {
        if(s[i]=='{' || s[i]=='}' || s[i]==',' || s[i]==' ')
            continue;
        else
        {
            if(s[i]!=s[i+1])
                c++;
        }
    }

    cout<<c<<endl;

    return 0;
}




