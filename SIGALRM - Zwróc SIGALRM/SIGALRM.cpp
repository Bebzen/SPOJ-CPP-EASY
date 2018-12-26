#include <iostream>
#include <signal.h>
using namespace std;

int main()
{
    raise(SIGALRM);
}
