#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string tekst;
    for (int i=0;i<t;i++)
    {
        cin>>tekst;
        for (int j=0;j<tekst.length();j++)
        {
            if((tekst[j]=='A')||(tekst[j]=='B')||(tekst[j]=='C')) cout<<2;
            else if((tekst[j]=='D')||(tekst[j]=='E')||(tekst[j]=='F')) cout<<3;
            else if((tekst[j]=='G')||(tekst[j]=='H')||(tekst[j]=='I')) cout<<4;
            else if((tekst[j]=='J')||(tekst[j]=='K')||(tekst[j]=='L')) cout<<5;
            else if((tekst[j]=='M')||(tekst[j]=='N')||(tekst[j]=='O')) cout<<6;
            else if((tekst[j]=='P')||(tekst[j]=='Q')||(tekst[j]=='R')||(tekst[j]=='S')) cout<<7;
            else if((tekst[j]=='T')||(tekst[j]=='U')||(tekst[j]=='V')) cout<<8;
            else if((tekst[j]=='W')||(tekst[j]=='X')||(tekst[j]=='Y')||(tekst[j]=='Z')) cout<<9;
        }
        cout<<endl;
    }
    return 0;
}
