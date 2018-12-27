#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(b>c) d=c;
        else d=b;
        for(d;d<a;d++)
        {
            if((d%b==0) && (d%c>0))
            cout<<d<<" ";
        }
        cout<<endl;
    }
    return 0;
}
