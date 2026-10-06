#include <iostream>

using namespace std;
void Putere(int n, int &x, &p)
{
    for(int i=2; i<=n; i++)
    {
        p=0;
        x=1;
        while(x<=n)
        {
            x=x*i;
            p=p+1;
        }
        if(x==n)
        {
            break;
        }
    }
}
