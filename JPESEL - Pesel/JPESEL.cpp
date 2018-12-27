#include <iostream>
using namespace std;

int main()
{
    int t,suma;
    long long int pesel;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        suma=0;
        cin>>pesel;
        suma=(pesel%10)*1;
        pesel=pesel/10;
        suma=suma+(pesel%10)*3;
        pesel=pesel/10;
        suma=suma+(pesel%10)*1;
        pesel=pesel/10;
        suma=suma+(pesel%10)*9;
        pesel=pesel/10;
        suma=suma+(pesel%10)*7;
        pesel=pesel/10;
        suma=suma+(pesel%10)*3;
        pesel=pesel/10;
        suma=suma+(pesel%10)*1;
        pesel=pesel/10;
        suma=suma+(pesel%10)*9;
        pesel=pesel/10;
        suma=suma+(pesel%10)*7;
        pesel=pesel/10;
        suma=suma+(pesel%10)*3;
        pesel=pesel/10;
        suma=suma+(pesel%10)*1;
        if (suma%10==0) cout<<"D"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
