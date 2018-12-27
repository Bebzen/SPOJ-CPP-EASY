#include <iostream>
using namespace std;

int main()
{
    int t;
    int tab[52]={0};
    cin>>t;
    char wyswietl;
    string tekst;
    for (int i=0;i<=t;i++)
    {
        getline(cin,tekst);
        for (int j=0;j<tekst.length();j++)
        {
            if((tekst[j]>=65)&&(tekst[j]<=90))
            {
                tab[tekst[j]-39]+=1;
            }
            else if((tekst[j]>=97)&&(tekst[j]<=122))
            {
                tab[tekst[j]-97]+=1;
            }
        }

    }
    for (int i=0;i<52;i++)
        {
            wyswietl=0;
            if ((tab[i]>0)&&(i<=25)) {wyswietl=wyswietl+i+97; cout<<wyswietl<<" "<<tab[i]<<endl;}
            else if (tab[i]>0) {wyswietl=wyswietl+i+39; cout<<wyswietl<<" "<<tab[i]<<endl;}
        }
    return 0;
}
