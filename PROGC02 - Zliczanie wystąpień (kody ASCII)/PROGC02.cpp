#include <iostream>
using namespace std;

int main()
{
    int tab[255]={0};
    string tekst;
    while(getline(cin,tekst))
    {
        for(int i=0;i<tekst.length();i++)
        {
            char a=tekst[i];
            int b=a;
            if(b<0)
            b=b+256;
            tab[b]++;
        }
        tab[10]++;
    }
    for(int i=0;i<255;i++) if(tab[i]>0) cout<<i<<" "<<tab[i]<<endl;
    return 0;
}
