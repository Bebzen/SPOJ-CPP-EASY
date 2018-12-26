#include <iostream>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        int tab[n];
        for (int j=0;j<n;j++)
        {
            cin>>a;
            tab[j]=a;
        }
        for (int k=n-1;k>=0;k--)
        {
            cout<<tab[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



