#include<iostream>
using namespace std;

int main()
{
    int n,i,j,c=0;

    cin>>n;

    int h[n],a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i]>>h[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==h[j])
                c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
