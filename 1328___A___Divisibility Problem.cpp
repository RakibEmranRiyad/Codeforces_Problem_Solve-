#include<iostream>
using namespace std;

int main()
{
    int t,i;
    cin>>t;

    while(t--)
    {
        long a,b;
        cin>>a>>b;
        cout<<(b-a%b)%b<<endl;
    }

    return 0;
}
