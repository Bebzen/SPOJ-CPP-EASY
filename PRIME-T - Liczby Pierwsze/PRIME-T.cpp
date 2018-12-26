#include <iostream>
using namespace std;

bool czy_pierwsza(int n)
{
	if(n<2)
		return false;

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}

int main()
{
	int n,m;
	cin>>m;
	for (int i=0;i<m;i++)
    {
        cin>>n;
        if(czy_pierwsza(n))
		cout<<"TAK"<<endl;
        else
		cout<<"NIE"<<endl;
    }
	return 0;
}
