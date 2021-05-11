#include<iostream>

using namespace std;

int main()
{
    int i=0,a,b;
    cin>>a>>b;


    while(i>=0)
    {
        a*=3;
        b*=2;
        i++;
        if(a>b)
            break;
    }
    cout<<i<<endl;

    return 0;
}

