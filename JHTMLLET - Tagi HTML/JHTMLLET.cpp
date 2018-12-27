#include <iostream>
using namespace std;

int main()
{
    string tekst;
    bool big=false;
    while(getline(cin,tekst))
    {
        for(int i=0;i<tekst.length();i++)
        {
            if(tekst[i]=='<')
            big=true;
            else
            if(tekst[i]=='>')
            big=false;
            else
            if(big)
            {
                if(tekst[i]>=97)
                {
                    tekst[i]=tekst[i]-32;
                }
            }
        }
        cout<<tekst<<endl;
    }
    return 0;
}
