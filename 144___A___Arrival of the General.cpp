#include<iostream>
using namespace std;

int main()
{
    int i,j,n,t,max=0,min=101,k,p;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];


    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            k=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            p=i;
        }

    }

    if(p>k)
    {
        k++;
    }

    cout<<p+(n-1)-k<<endl;

    return 0;
}
