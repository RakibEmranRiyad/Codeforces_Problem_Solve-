#include<iostream>
using namespace std;

int main()
{
    int n,a,b,i=0;
    cin>>n;

    while(n--)
    {
        cin>>a>>b;
        if(a<b-1)
            i++;
    }

    cout<<i<<endl;

    return 0;
}
