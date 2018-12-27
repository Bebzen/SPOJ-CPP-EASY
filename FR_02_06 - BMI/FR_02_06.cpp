#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    double t,a,b,bmi;
    string imie;
    vector <string> niedowaga;
    vector <string> praw;
    vector <string> nadwaga;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>imie>>a>>b;
        bmi=a/pow(b/100,2);
        if (bmi<18.5) niedowaga.push_back(imie);
        else if (bmi>=25) nadwaga.push_back(imie);
        else praw.push_back(imie);
    }
    cout<<"niedowaga"<<endl;
    for (int i=0;i<niedowaga.size();i++)
    {
        cout<<niedowaga[i]<<endl;
    }
    cout<<"wartosc prawidlowa"<<endl;
    for (int i=0;i<praw.size();i++)
    {
        cout<<praw[i]<<endl;
    }
    cout<<"nadwaga"<<endl;
    for (int i=0;i<nadwaga.size();i++)
    {
        cout<<nadwaga[i]<<endl;
    }
    return 0;
}
