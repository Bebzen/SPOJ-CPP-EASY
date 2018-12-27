#include <iostream>
using namespace std;

int main()
{
    string a;
    while(cin>>a)
    {
        if(a=="0") break;
        else
        {
            int b=0;
            string c="";
            if((a[a.length()-1]=='0')||(a[a.length()-1]=='5'))
            {
                for(int i=0;i<a.length();i++)
                {
                    b+=((a[i]-48)*10)%15;
                    b%=15;
                }
            }
            else
            b=1;
            if(b==0) cout<<"TAK"<<endl;
            else cout<<"NIE"<<endl;
        }
    }
    return 0;
}
