#include<iostream>
using namespace std;

int main()
{
    int i,t,n,k=0;
    cin>>t;

    while(t--)
    {
        cin>>n;

        while(n & (n-1))
        {
            n=n & (n-1);
        }
        k=n-1;
        cout<<k<<endl;
    }

    return 0;
}
