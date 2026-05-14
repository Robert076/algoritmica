#include <iostream>

using namespace std;
int cmmdc(int a, int b)
{
    while(b)
    {
        int rest=a%b;
        a=b;
        b=rest;
    }
    return a;
}
int main()
{
    int n,x,y,s=-1,smaxim=-1,maxim=-1,nr=-1, nr_din_pereche_1=0, nr_din_pereche_2=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x>>y;
        s=s+x+y;
        if(cmmdc(x,y)>maxim)
        {
            maxim=cmmdc(x,y);
            nr_din_pereche_1=x;            
            nr_din_pereche_2=y;

        }
        else if(cmmdc(x,y)==maxim)
        {
            if(x + y > smaxim)
            {
             	smaxim = x+y;
                nr_din_pereche_1=x;            
            	nr_din_pereche_2=y;
            }
        }
    }
    cout<<nr_din_pereche_1<<" " << nr_din_pereche_2;
    return 0;
}
:
