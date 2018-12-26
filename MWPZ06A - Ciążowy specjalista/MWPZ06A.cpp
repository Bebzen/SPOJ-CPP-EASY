#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    double X,Y,Z,a;
    for (int i=0;i<t;i++)
    {
        cin>>X>>Y>>Z;
        a = ((Z*Y-X-Y)/(1-Z))*(-12);
        cout<<fixed<<setprecision(0)<<a<<endl;
    }
    return 0;
}
