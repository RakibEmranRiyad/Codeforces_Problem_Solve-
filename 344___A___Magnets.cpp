#include<iostream>

using namespace std;

int main()
{
    int i,n,c=0;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            c++;
    }

    cout<<c<<endl;

    return 0;
}
