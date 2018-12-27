#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        int c,d;
        c=a.length();
        d=b.length();
        if(c>d) c=d;
        for (int j=0;j<c;j++)
        {
            cout<<a[j]<<b[j];
        }
        cout<<endl;
    }
    return 0;
}
