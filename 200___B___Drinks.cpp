#include<iostream>

using namespace std;

int main()
{
    int i,a,n,s=0;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        s+=a;
    }

    cout<<(double) s/(double) n<<endl;

    return 0;
}
