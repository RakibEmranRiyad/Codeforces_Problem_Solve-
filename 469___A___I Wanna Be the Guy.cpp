#include<iostream>

using namespace std;

int main()
{
    int i,n,j,l,a,t[100];
    cin>>n;

    for(i=0;i<n;i++)
        t[i]=0;

    for(j=0;j<2;j++)
    {
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>a;
            t[a-1]=a;
        }
    }

    for(i=0;i<n;i++)
    {
        if(t[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;

    return 0;
}


