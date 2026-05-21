#include <iostream>
using namespace std;
int main()
{
    int n,m,A[101][101],s,maxim=-1,vecin_sus,vecin_jos,vecin_st,vecin_dr,linie,coloana;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            s=0;
           vecin_sus=vecin_jos=vecin_st=vecin_dr=0;
           if(j>1)
           {
               vecin_st=A[i][j-1];
           }
           if(j<m)
           {
               vecin_dr=A[i][j+1];

           }
           if(i>1)
           {
               vecin_sus=A[i-1][j];
           }
           if(i<n)
           {
               vecin_jos=A[i+1][j];
           }
           s=vecin_st+vecin_dr+vecin_sus+vecin_jos;
           if(s>maxim)
           {
               maxim=s;
               linie=i;
               coloana=j;
           }
        }
    }
            cout<<linie<<coloana;
    return 0;
}
