#include <iostream>
using namespace std;
int main()
{
    int a,b,t;
    char d;
    int tab[10];
    while (cin>>d)
    {
        cin>>a>>b;
        switch (d)
        {
            case '+': cout<<tab[a]+tab[b]<<endl; break;
            case '-': cout<<tab[a]-tab[b]<<endl; break;
            case '*': cout<<tab[a]*tab[b]<<endl; break;
            case '/': cout<<tab[a]/tab[b]<<endl; break;
            case '%': cout<<tab[a]%tab[b]<<endl; break;
            case 'z': tab[a]=b; break;
        }
    }
    return 0;
}


