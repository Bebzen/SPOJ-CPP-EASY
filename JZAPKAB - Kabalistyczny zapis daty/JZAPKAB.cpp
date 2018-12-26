#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int b=0;
    for (int i=0;i<a.length();i++)
    {
        switch(a[i])
        {
            case 'a':b=b+1; break;
            case 'b':b=b+2; break;
            case 'c':b=b+3; break;
            case 'd':b=b+4; break;
            case 'e':b=b+5; break;
            case 'f':b=b+6; break;
            case 'g':b=b+7; break;
            case 'h':b=b+8; break;
            case 'i':b=b+9; break;
            case 'k':b=b+10; break;
            case 'l':b=b+20; break;
            case 'm':b=b+30; break;
            case 'n':b=b+40; break;
            case 'o':b=b+50; break;
            case 'p':b=b+60; break;
            case 'q':b=b+70; break;
            case 'r':b=b+80; break;
            case 's':b=b+90; break;
            case 't':b=b+100; break;
            case 'v':b=b+200; break;
            case 'x':b=b+300; break;
            case 'y':b=b+400; break;
            case 'z':b=b+500; break;
        }
    }
    cout<<b;
    return 0;
}
