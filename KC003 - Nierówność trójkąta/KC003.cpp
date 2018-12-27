#include <iostream>
using namespace std;

int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        if((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
        {
            if((a>0)&&(b>0)&&(c>0)) cout<<1<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}
