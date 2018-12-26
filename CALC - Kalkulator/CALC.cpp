#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char d;
    while(cin>>d)
    {
        cin>>a>>b;
        switch (d)
        {
            case '+': cout<<a+b<<endl; break;
            case '-': cout<<a-b<<endl; break;
            case '*': cout<<a*b<<endl; break;
            case '/': cout<<a/b<<endl; break;
            case '%': cout<<a%b<<endl; break;
        }
    }
    return 0;
}

