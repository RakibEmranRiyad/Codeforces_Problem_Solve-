#include<iostream>
using namespace std;

int main()
{
    int i,n,s=0,m=0,a;

    cin>>n;

    for(i=0;i<n;i++)
        {
            cin>>a;
            s+=a;
            if(a>m)
                m=a;
        }

    cout<<(m*n)-s<<endl;

    return 0;
}


/*int main()
{
    int i,n,t,s=0;

    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    int max=a[0];

    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]<max)
        {
            s+=max-a[i];
        }
    }


    cout<<s<<endl;

    return 0;
}*/
