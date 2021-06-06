#include<iostream>


using namespace std;

int main()
{
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    if (a>b && a>c && a>d)
    {
        cout<<(b+c)-a<<" "<<(c+d)-a<<" "<<(d+b)-a;
    }
    else if (b>a && b>c && b>d)
    {
        cout<<(a+c)-b<<" "<<(c+d)-b<<" "<<(d+a)-b;
    }
    else if (c>a && c>b && c>d)
    {
        cout<<(a+b)-c<<" "<<(b+d)-c<<" "<<(d+a)-c;
    }
    else if (d>b && d>c && d>a)
    {
        cout<<(a+b)-d<<" "<<(b+c)-d<<" "<<(c+a)-d;
    }

    return 0;
}
