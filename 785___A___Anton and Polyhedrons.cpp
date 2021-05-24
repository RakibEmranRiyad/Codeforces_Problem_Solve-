#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int c=0,n,i;
    string s;
    cin>>n;

    while(n--)
    {
        cin>>s;
        if(s=="Tetrahedron")
            i=4;
        else if(s=="Cube")
            i=6;
        else if(s=="Octahedron")
            i=8;
        else if(s=="Dodecahedron")
            i=12;
        else if(s=="Icosahedron")
            i=20;
        c+=i;
    }

    cout<<c<<endl;

    return 0;
}
