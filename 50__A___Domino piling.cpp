#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n,m,p=0;
    string x;
    cin>>n;

    while(n--)
    {
        cin>>x;
        if(x=="x++" || x=="++x" || x=="X++" || x=="++X")
        {
            p+=1;
        }
        else if(x=="x--" || x=="--x" || x=="X--" || x=="--X")
        {
            p-=1;
        }
    }

    cout<<p;

    return 0;
}
