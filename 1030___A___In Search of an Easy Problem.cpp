#include<iostream>

using namespace std;

int main()
{
    int i,n,c=0;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c=1;
            break;
        }
        else
            continue;
    }

    if(c==1)
        cout<<"HARD"<<endl;
    if(c==0)
        cout<<"EASY"<<endl;

    return 0;
}
