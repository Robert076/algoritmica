#include <iostream>
using namespace std;
int nr_echilibrat(int n)
{
  int nrp=0;
  int nri=0;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0)
        {
            if(d%2==0)
            {
                nrp++;
            }
            else nri++;
            // cum divizorii vin in perechi inainte si dupa radical, daca parcurgem doar pana la radical
            // atunci trebuie sa luam si ce ar fi dupa
            if(d * d != n) {
                if(n/d%2 == 0) nrp++;
                else nri++;
            }
        }
    }
    if(nrp==nri)
        return 1;
    return 0;
}
int main()
{
    int a,b,s=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        if(nr_echilibrat(i))
        {
            s=s+i;
        }
    }
    cout<<s;
    return 0;
}

