#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,t,a;
    cin>>t>>n; //t to ilosc elementow a n to przesuniecie
    vector<int> tab;
    vector<int> tab2;
    n=n-1;
    for (int i=0;i<t;i++)
    {
        cin>>a;
        if(i<=n) tab2.push_back(a);
        else tab.push_back(a);
    }
    for (int i=0;i<tab.size();i++)
    {
        cout<<tab[i]<<" ";
    }
    for (int i=0;i<tab2.size();i++)
    {
        cout<<tab2[i]<<" ";
    }
    return 0;
}
