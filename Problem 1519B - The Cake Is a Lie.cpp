#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,m,k;
    while(t)
    {
        cin>>n>>m>>k;
        if(k==((n*m)-1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
        t--;
    }

    return 0;
}
