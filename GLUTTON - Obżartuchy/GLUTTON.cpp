#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double doba = 86400;
    double t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        double a;
        double b;
        double suma=0;
        cin>>a>>b;
        while (a--)
        {
            double S;
            cin>>S;
            suma+=floor(doba/S);

        }
        cout<<ceil(suma/b)<<endl;
        suma=0;
    }
    return 0;
}
