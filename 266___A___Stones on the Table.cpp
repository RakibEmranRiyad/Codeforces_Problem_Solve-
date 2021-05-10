#include<iostream>
#include<string>

using namespace std;

int main()
{
    //string s;
    int i,n,p=0;
    cin>>n;
    char a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            p++;
    }
    cout<<p<<endl;

    return 0;
}
