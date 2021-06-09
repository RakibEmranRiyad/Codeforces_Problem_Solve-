#include<iostream>
using namespace std;

int main()
{
    int t,i,j;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n/2%2)
            cout<<"NO"<<endl;
		else
        {
			cout<<"YES"<<endl;
			for(i=2;i<=n;i+=2)
                cout<<i<<" ";
			for(j=1;j<n-2;j+=2)
                cout<<j<<" ";
                cout<<j+n/2<<endl;
		}
    }
}
