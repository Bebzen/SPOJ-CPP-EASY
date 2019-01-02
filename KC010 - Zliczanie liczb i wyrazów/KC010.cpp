#include<iostream>
using namespace std;
int main()
{
    string tekst;
	while(getline(cin,tekst))
    {
        int liczby=0,wyrazy=0;
        bool sprawdzenie=true;
        for(int i=0;i<tekst.length();i++)
        {
            if(sprawdzenie)
            {
                if(tekst[i]>=48 && tekst[i]<=57) liczby++;
                else wyrazy++;
                sprawdzenie=false;
            }
            if(tekst[i]==' ') sprawdzenie=true;
        }
        cout<<liczby<<" "<<wyrazy<<endl;
    }
    return 0;
}
