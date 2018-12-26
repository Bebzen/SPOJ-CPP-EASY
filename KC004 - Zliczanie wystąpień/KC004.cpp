#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    int licznik=0;
    while(cin>>a)
    {
        licznik=0;
        cin>>b;
        for (int i=0;i<b;i++)
        {
            cin>>c;
            if (c==a) licznik++;
        }
        cout<<licznik<<endl;
    }
    return 0;
}
