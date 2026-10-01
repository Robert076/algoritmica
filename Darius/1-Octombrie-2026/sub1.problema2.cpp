#include <iostream>
using namespace std;
int main()
{
    int A[20][20],m,n,s,maxim=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            s=A[i][j]+A[i][j+1]+A[i+1][j]+A[i+1][j+1];
            if(maxim<s)
            {
                maxim=s;
            }
        }
    }
    cout<<maxim;
    return 0;
}
