#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int tab[t];
    long long a=0;
    long long maxi=0;
    for(int i=0;i<t;i++)
    {
        cin>>tab[i];
    }
    for(int i=0;i<t;i++)
    {
        a=a+tab[i];
        if(a<0) a=0;
        else if(a>maxi)

        maxi=a;
    }
    cout<<maxi<<endl;
    return 0;
}
