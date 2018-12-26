#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,y;
    for (int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x==1 && y>0) cout<<"TAK"<<endl;
        else if(((x-1)>y) || (y%(x-1)>0))  cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
    }
    return 0;
}
