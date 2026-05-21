#include <iostream>
using namespace std;
int main()
{
    int n,m,A[101][101],s,maxim;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        maxim=-1;
        for(int j=1; j<=m; j++)
        {
            if(A[i][j]>maxim)
            {
                maxim=A[i][j];
            }
        }
        s=0;
        for(int j=1; j<=m; j++)
        {
           s=s+A[i][j];
        }
        cout<<s-maxim<<" ";
    }
    return 0;
}

