#include <iostream>

using namespace std;

int main()
{
    long long n, m, A[101][101], col_min, min = 10000000;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> A[i][j];
            if(A[i][j] < min)
            {
                min = A[i][j];
                col_min = j;
            }
        }
    }
    int ultimul_nr=A[n][m];
    for(int i=1; i<=n; i++)
    {
        A[i][col_min] = ultimul_nr;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}

