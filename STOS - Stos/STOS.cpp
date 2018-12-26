#include <iostream>
#include <string>
using namespace std;

int main()
{
    int stos[10]={0};
    char wejscie;
    int liczba;
    bool sprawdzenie=false;
    while (cin>>wejscie)
    {
        if (wejscie=='+')
        {
            cin>>liczba;
            stos[liczba]++;
            if(stos[liczba]==1) {cout<<":)"<<endl;}
            if(stos[liczba]==2) {cout<<":("<<endl; stos[liczba]=1;}
        }
        if (wejscie=='-')
        {
            if (stos[0]==1) {cout<<0<<endl; stos[0]=0; }
            else if (stos[9]==1) {cout<<9<<endl; stos[9]=0;}
            else if (stos[8]==1) {cout<<8<<endl; stos[8]=0;}
            else if (stos[7]==1) {cout<<7<<endl; stos[7]=0;}
            else if (stos[6]==1) {cout<<6<<endl; stos[6]=0;}
            else if (stos[5]==1) {cout<<5<<endl; stos[5]=0;}
            else if (stos[4]==1) {cout<<4<<endl; stos[4]=0;}
            else if (stos[3]==1) {cout<<3<<endl; stos[3]=0;}
            else if (stos[2]==1) {cout<<2<<endl; stos[2]=0;}
            else if (stos[1]==1) {cout<<1<<endl; stos[1]=0;}
            else cout<<":("<<endl;
        }

    }
    return 0;
}
