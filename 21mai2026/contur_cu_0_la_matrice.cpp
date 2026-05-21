#include <iostream>
using namespace std;
int main()
{
    int n,m,A[101][101];
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
            A[i][1]=0;
            A[i][m]=0;
    }
        for(int j=1;j<=m;j++)
        {
        A[1][j]=0;
        A[n][j]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}
