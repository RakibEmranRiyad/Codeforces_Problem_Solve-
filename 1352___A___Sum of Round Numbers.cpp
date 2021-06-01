#include<iostream>

using namespace std;

int main()
{
    int i,n,a[6],t,r,p=0;

    cin>>t;

    while(t--)
    {
        cin>>n;
        i=1;
        p=0;
        while(n)
        {
            i*=10;
            r=n%i;
            n-=r;
            if(r)
                {
                    a[p]=r;
                    p++;
                }
        }
        cout<<p<<endl;
        for(i=0;i<p;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
