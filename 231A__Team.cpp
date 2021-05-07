#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,m,k,i=0;
    while(t--)
    {
        cin>>n>>m>>k;
        if((m+n+k)>=2)
            i++;
    }
    cout<<i<<endl;

    return 0;
}
