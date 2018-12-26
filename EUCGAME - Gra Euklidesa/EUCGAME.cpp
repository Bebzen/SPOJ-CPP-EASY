#include <iostream>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        while(a!=b)
        {
            if(a>b) a=a-b;
            if(b>a) b=b-a;
        }
        cout<<a*2<<endl;
    }
    return 0;
}


