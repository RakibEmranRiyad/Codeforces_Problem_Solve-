#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    long long int a,b,i,t,n,p,r;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n=0,r=0,p=0;
        if(a<b)
        {
            n=b-a;
                for(i=10;i>=1;i--)
                {
                    r=n%i;
                    p+=(n/i);
                    n=r;
                    if(r==0)
                        break;
                }
                cout<<p<<endl;
        }
        else if(a>b)
        {
            n=a-b;
                for(i=10;i>=1;i--)
                {
                    r=n%i;
                    p+=(n/i);
                    n=r;
                    if(r==0)
                        break;
                }
                cout<<p<<endl;
        }
        else if(a==b)
            cout<<a-b<<endl;
    }
    return 0;
}
