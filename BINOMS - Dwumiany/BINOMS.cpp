#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double t,n,k;
    cin>>t;
    double wynik;
    for (int i=0;i<t;i++)
    {
        cin >> n >> k;
        wynik=1;
        for(double i=1; i <=k ; i++)
            {
                wynik=((n-i + 1)) /i*wynik;
            }
        printf("%1.0f\n", wynik);
    }
    return 0;
}
