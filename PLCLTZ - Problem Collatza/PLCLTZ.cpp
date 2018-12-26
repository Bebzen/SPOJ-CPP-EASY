#include <iostream>
using namespace std;
int Sprawdzenie(int s)
{
    int x,xn;
    x=s;
    int licznik=0;
    if(s==1) return 0;
    xn=x;
    while(xn!=1)
    {
        if(xn%2==0) xn=xn/2;
        else xn=(xn*3)+1;
        licznik++;
    }
    return licznik;
}
int main()
{
    int t,s;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>s;
        cout<<Sprawdzenie(s)<<endl;
    }
    return 0;
}


