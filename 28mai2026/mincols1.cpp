#include <iostream>
using namespace std;
int main()
{
    int n,m,A[105][105],minim=9999999;
    cin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>A[i][j];
            if(A[i][j]<minim)
            {
                minim=A[i][j];
            }
        }
    }
    for(int j=1; j<=n; j++)
    {
        for(int i=1; i<=m; i++)
        {
            if(A[i][j]==minim)
            {
                for(int k=1;k<=m;k++)
                {
                    A[k][j]=minim;
                }
            }
        }
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
