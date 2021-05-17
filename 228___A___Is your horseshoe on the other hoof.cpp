#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    cout<<(a==b)+(a==c || b==c) + (a==d || b==d ||c==d)<<endl;

    return 0;
}
