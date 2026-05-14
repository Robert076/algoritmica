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
    int n,nr=0, x;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int ogl=0;
        cin >> x;
        int copie_x = x;
        while(x)
        {
            ogl=ogl*10+x%10;
            x=x/10;
        }
            if(cmmdc(copie_x,ogl)==1)
            {
                nr++;
            }
    }
    cout<<nr;
    return 0;
}

