#include <iostream>
using namespace std;

int main()
{
    int t,a;
    unsigned int b,c=-1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        unsigned int tab[a];
        for(int j=0;j<a;j++)
        {
            cin>>b;
            tab[j]=b;
        }
        unsigned int c=-1;
        c+=a;
        for(int j=0;j<a;j++)
        c+=tab[j];
        cout<<c<<endl;
    }
    return 0;
}
