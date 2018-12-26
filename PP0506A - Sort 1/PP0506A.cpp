#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

struct punkt
{
    string nazwa;
    int x;
    int y;
};
bool compare( punkt a, punkt b)
{
    return sqrt(pow((a.x),2)+pow((a.y),2)) < sqrt(pow((b.x),2)+pow((b.y),2));
}
int main()
{
    int t,t2,a,licznik=0;
    string wejscie;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        licznik=0;
        cin>>t2;
        vector<punkt> lista;
        for (int j=0;j<t2;j++)
        {
            cin>>wejscie;
            cin>>a;
            lista.push_back(punkt());
            lista[licznik].nazwa=wejscie;
            lista[licznik].x=a;
            cin>>a;
            lista[licznik].y=a;
            licznik++;
        }
        stable_sort(lista.begin(),lista.end(),compare);
        for(int j=0;j<licznik;j++)
        {
            cout<<lista[j].nazwa<<" "<<lista[j].x<<" "<<lista[j].y<<" "<<endl;
        }
        lista.clear();

    }

    return 0;
}
