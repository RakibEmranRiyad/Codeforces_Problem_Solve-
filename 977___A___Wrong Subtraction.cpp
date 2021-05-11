#include<iostream>

using namespace std;

int main()
{
    int i=1,r,n,k;
    cin>>n>>k;


    while(i<=k)
    {
        r=n%10;
        if(r!=0)
            n-=1;
        else
            n/=10;
        i++;
    }
    cout<<n<<endl;

    return 0;
}

