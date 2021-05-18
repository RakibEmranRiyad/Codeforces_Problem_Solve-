#include<iostream>

using namespace std;

int main()
{
    int i,n,j;


    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==i+1)
            {
                cout<<j+1<<" ";
            }
        }
    }

    return 0;
}
