#include <iostream>
using namespace std;

int main()
{
    int a;
    long long int suma=0,suma2=0;
    while (cin>>a)
    {
        if (a==0) {cout<<suma<<endl; suma2=suma2+suma; suma=0;}
        suma=suma+a;
    }
    cout<<suma2<<endl;
    return 0;
}
