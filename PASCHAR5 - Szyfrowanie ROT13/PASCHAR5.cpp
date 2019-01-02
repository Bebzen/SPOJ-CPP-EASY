#include<iostream>
using namespace std;
int main()
{
	string tekst;
    while(getline(cin,tekst))
    {
        for(int i=0;i<tekst.length();i++)
        {
            int a=0;
            if((tekst[i]>=65)&&(tekst[i]<=90))
            {
                a=tekst[i]+13;
                if(a>90) tekst[i]=64+a%90;
                else tekst[i]=a;
            }
            else if((tekst[i]>=97)&&(tekst[i]<=122))
            {
                a=tekst[i]+13;
                if(a>122) tekst[i]=96+a%122;
                else tekst[i]=a;
            }
            else if((tekst[i]>=48)&&(tekst[i]<=57))
            {
                a=tekst[i]+5;
                if(a>57) tekst[i]=47+a%57;
                else tekst[i]=a;
            }
        }
        cout<<tekst<<endl;
    }
    return 0;
}
