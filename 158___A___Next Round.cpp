#include<iostream>

using namespace std;

int main()
{
    int n,k,i,c=0,d=0;
    cin>>n>>k;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]&& a[i]>=a[k-1])
            c++;
    }

    cout<<c<<endl;


    return 0;
}
