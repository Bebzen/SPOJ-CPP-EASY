#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int tab[n];
        for (int j=0;j<n;j++)
        {
            cin>>tab[j];
        }
        for (int j=0;j<n;j++)
        {
            if(j%2!=0) cout<<tab[j]<<" ";
        }
        for (int j=0;j<n;j++)
        {
            if(j%2==0) cout<<tab[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
