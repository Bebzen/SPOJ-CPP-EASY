#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    vector <int> tablica;
    while(cin>>a)
    {
        tablica.push_back(a);
    }
    for (int i=tablica.size()-1;i>=0;i--)
    {
        cout<<tablica[i]<<" ";
    }
    return 0;
}
