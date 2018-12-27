#include <iostream>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int tab[6];
        float tabb[2];

        for(int j=0;j<6;j++)
        {
            cin>>x;
            tab[j]=x;
        }
        float p=0;
        float a=tab[3]-tab[1];
        float b=tab[2]-tab[0];
        if(b!=0)
        p=a/b;
        tabb[0]=p;
        a=tab[5]-tab[1];
        b=tab[4]-tab[0];
        p=0;
        if(b!=0)
        p=a/b;
        tabb[1]=p;
        if(tabb[0]==tabb[1]) cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
    }
    return 0;
}
