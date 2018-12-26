#include <iostream>
using namespace std;

int NWD(int a,int b)
{
    if (a==0) return b;
    if (b==0) return a;
    if (a>b) a=a-b;
    else b=b-a;
    return NWD(a,b);
}
int main()
{
    int t,a,b;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        cout<<((a*b)/NWD(a,b))<<endl;
    }
    return 0;
}


