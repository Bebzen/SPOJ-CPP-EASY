#include <iostream>
using namespace std;

int main()
{
    int t,b,licznik=1;
    string a;
    cin>>t;
    char zapisany;
    for (int i=0;i<t;i++)
    {
        cin>>a;
        b=a.length();
        for (int j=0;j<b;j++)
        {
            if (a[j]==a[j+1]) {licznik++; zapisany=a[j];}
            else if(a[j]!=a[j+1]) { if (licznik>=3) {cout<<a[j]<<licznik; licznik=1;}
                                    else if (licznik==2) {cout<<a[j]<<a[j]; licznik=1;}
                                    else {cout<<a[j]; licznik=1;}}
        }
        cout<<endl;
    }
    return 0;
}
