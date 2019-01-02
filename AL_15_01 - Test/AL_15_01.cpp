#include <iostream>
using namespace std;
int main()
{
    string a,b,c;
    int d=0;
    cin>>a>>b>>c;
    for (int i=0;i<a.length();i++)
    {
        if (a[i]!= b[i]) d++;
        if (a[i]!=c[i]&&c[i]== b[i]) d++;
        if (b[i]==a[i]&&c[i]!= b[i]) d++;
    }
    cout<<d;
    return 0;
}
