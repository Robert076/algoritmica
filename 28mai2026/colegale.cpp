#include <iostream>

using namespace std;
int main()
{
    int n,m,A[105][105];
    bool gasit = false;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>A[i][j];
        }
    }
    for(int j=1; j<=m; j++)
    {
        bool sunt_egale=true;
        for(int i=2; i<=n; i++)
        {
            if(A[i][j] != A[i-1][j])
                sunt_egale = false;
        }
        if(sunt_egale==true)
        {
            gasit = true;
            cout<<A[n][j]<<" ";
        }
    }
    if(!gasit) cout << "nu exista";
    return 0;
}

