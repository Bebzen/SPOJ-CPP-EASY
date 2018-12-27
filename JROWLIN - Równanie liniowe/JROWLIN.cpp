#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d;
    cin>>a>>b>>c;
    if(a!=0)
    {
        d=((c-b)/a);
        d=d*100;
        d=round(d);
        d=d/100;
        cout<<d;
        if((int)d==d)
        cout<<".00";
    }
    else
    {
        if((c-b)==0)
        cout<<"NWR"<<endl;
        else
        cout<<"BR"<<endl;
    }
    return 0;
}
