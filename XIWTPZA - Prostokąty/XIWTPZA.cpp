#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double m,a,b,p,q,e;
	cin>>m;
	for (int i=0; i<m; i++)
	{
	    cin>>a>>b>>p>>q;
        if (b>a){e=a;a=b;b=e;};
        if (q>p) {e=p; p=q; q=e;};
        if ((p<a&&q<b)||(p>a&&b>(2*p*q*a+(p*p-q*q)*sqrt(p*p+q*q-a*a))/(p*p+q*q))) cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
	}
	return 0;
}
