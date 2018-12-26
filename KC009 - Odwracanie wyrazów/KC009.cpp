#include <iostream>
using namespace std;

int main()
{
    string a;
    while(cin>>a)
    {
        int b=a.length();
        b=b-1;
        for (;b>=0;b--)
        {
            cout<<a[b];
        }
        cout<<endl;
    }
    return 0;
}
