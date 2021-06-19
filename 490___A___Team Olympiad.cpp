#include<iostream>
using namespace std;

int main()
{
    int n,t[5000],a[5000],b[5000],c[5000],i=0,j=0,k=0,l=0,min;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>t[i];

        if(t[i]==1)
        {
            a[j]=i+1;
            j++;
        }
        else if(t[i]==2)
        {
            b[k]=i+1;
            k++;
        }
        else if(t[i]==3)
        {
            c[l]=i+1;
            l++;
        }
    }

    if(j<=k && j<=l)
        {
        min=j;
        }
    else if(k<=j && k<=l)
        {
        min=k;
        }
    else
        {
        min=l;
        }

    cout<<min<<endl;

    for(i=0;i<min;i++)
            cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;

    return 0;
}
