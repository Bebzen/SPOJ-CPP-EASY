#include <iostream>
using namespace std;

int main()
{
    int t;
    string wejscie;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>wejscie;
        int dlugosc=wejscie.length();
        dlugosc=dlugosc/2;
        for(int j=0;j<dlugosc;j++)
        {
            cout<<wejscie[j];
        }
        cout<<endl;
    }
    return 0;
}
