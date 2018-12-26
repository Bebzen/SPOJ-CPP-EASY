#include <iostream>
using namespace std;
int main()
{
    int a,c=0,licznik=0;
    while (cin>>a)
    {
        if ((a==42)&&(c==1)) licznik++;
        if (a!=42) {c=1; cout<<a<<endl;}
        else {c=0; cout<<a<<endl;}
        if (licznik==3) return 0;
    }
    return 0;
}


