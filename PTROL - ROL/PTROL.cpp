#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        int wejscie[n];
        for (int j=0;j<n;j++)
        {
            cin>>wejscie[j];
        }
        for (int j=0;j<n-1;j++)
        {
            cout<<wejscie[j+1]<<" ";
        }
        cout<<wejscie[0]<<endl;
    }
    return 0;
}


