#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
    string a,b;
    int i,n;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if(a==b)
    {
        cout<<"0"<<endl;

    }


    n=a.size();
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            cout<<"-1"<<endl;
            break;
        }

        else if(a[i]>b[i])
        {
            cout<<"1"<<endl;
            break;
        }
    }
    return 0;
}
