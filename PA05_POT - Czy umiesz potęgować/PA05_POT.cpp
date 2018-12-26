#include <iostream>
using namespace std;
int main()
{
    int t,n,a,suma=0;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        for (int j=0;j<n;j++)
        {
            cin>>a;
            suma=suma+a;
        }
        cout<<suma<<endl;
        suma=0;
    }
    return 0;
}

