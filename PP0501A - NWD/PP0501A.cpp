#include <iostream>
#include <string>
using namespace std;

int NWD(int a, int b)
{
    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    cout<<a<<endl;
}

int main()
{
    int t,a,b;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        NWD(a,b);
    }
}
