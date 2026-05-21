#include <iostream>

using namespace std;
bool prim(int n)
{
    if(n<2)
    {
        return false;
    }
    if(n>2 && n%2==0)
    {
        return false;
    }
    for(int d=3; d*d<=n; d++)
    {
        if(n%d==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, m, A[105][105], cnt=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(j<m)
            {
                if(prim(A[i][j+1]))
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
