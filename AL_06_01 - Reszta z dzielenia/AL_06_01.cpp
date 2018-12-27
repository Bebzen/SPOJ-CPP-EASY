#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int c=a%b;
        if(c<0 && b>0) c=c+b;
        else if(c<0 && b<0) c+=-b;
        cout<<c<<endl;
    }
    return 0;
}
