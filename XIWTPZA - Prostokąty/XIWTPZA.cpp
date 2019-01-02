#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    string a,b,c;
    int d=0;
    cin>>a>>b>>c;
    for (int j=0;j<a.length();j++)
    {
        if (a[i]!= b[i]) d++;
        if (a[i]!=c[i]&&c[i]== b[i]) d++;
        if (b[i]==a[i]&&c[i]!= b[i]) d++;
    }
    cout<<d;
    return 0;
}
