#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i,n,a=0,d=0;
    cin>>n;
    char c[n];


    for(i=0;i<n;i++)
    {
        cin>>c[i];
        if(c[i]=='A')
            a++;
        else if(c[i]=='D')
            d++;
    }

    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}
