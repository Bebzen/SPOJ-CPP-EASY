#include <iostream>
using namespace std;

int main()
{
    int D,N,Gora=0,Bok=0,a,b;
    cin>>D;
    for (int i=0;i<D;i++)
    {
        cin>>N;
        for (int j=0;j<N;j++)
        {
            cin>>a>>b;
            switch(a)
            {
                case 0: Gora=Gora+b; break;
                case 1: Gora=Gora-b; break;
                case 2: Bok=Bok-b; break;
                case 3: Bok=Bok+b; break;
            }
        }
        if (Gora>0) cout<<0<<" "<<Gora;
        if (Gora<0) cout<<1<<" "<<Gora*-1;
        cout<<endl;
        if (Bok>0) cout<<3<<" "<<Bok;
        if (Bok<0) cout<<2<<" "<<Bok*-1;
        if ((Gora==0)&&(Bok==0)) cout<<"studnia";
        Gora=0;
        Bok=0;
        cout<<endl;
    }
    return 0;
}


