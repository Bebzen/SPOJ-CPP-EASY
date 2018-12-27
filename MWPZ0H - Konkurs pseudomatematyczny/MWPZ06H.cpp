#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        int maxi=0;
        int pozycja=0;
        cin>>x;
        vector <int> tab;
        int a;
        for (int j=0;j<x;j++)
        {
            cin>>a;
            tab.push_back(a);
        }
        sort(tab.begin(),tab.end(),greater<int>());
        for (int j=0;j<x;j++)
        {
            if (tab[j]>=maxi) {maxi=tab[j]; pozycja=j;}
        }
        pozycja=pozycja+1;
        sort(tab.begin()+pozycja,tab.end());
        for (int j=0;j<x;j++)
        {
            cout<<tab[j]<<" ";
        }


        cout<<endl;
        tab.clear();
    }
    return 0;
}
