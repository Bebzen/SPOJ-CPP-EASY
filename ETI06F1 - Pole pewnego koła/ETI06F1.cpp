#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double r,d,S,r2;
    double Pi=3.141592654;
    cin>>r>>d;
    r2=sqrt((r*r)-((d*d)/4));
    S=Pi*r2*r2;
    cout<<fixed<<setprecision(2)<<S;
    return 0;
}
