#include<iostream>

using namespace std;

int main()
{
    int i,n,s=0,r,k;

    cin>>k>>r;

    for(i=1; ;i++)
    {
        s+=k;
        if((s%10==0) || (s%10==r))
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
