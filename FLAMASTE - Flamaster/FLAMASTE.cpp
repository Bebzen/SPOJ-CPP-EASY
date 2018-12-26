#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c;
    int licznik=0;
    string tekst,tekst2;
    for (int i=0;i<t;i++)
    {
        licznik=0;
        cin>>tekst;
        do
        {
            tekst2=tekst;
            reverse(tekst2.begin(),tekst2.end());
            a=atoi(tekst.c_str());
            b=atoi(tekst2.c_str());
            if (a==b) break;
            licznik++;
            a=a+b;
            tekst=to_string(a);
        } while(true);
        cout<<a<<" "<<licznik<<endl;
    }
}
