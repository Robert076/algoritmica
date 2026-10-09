#include <iostream>

using namespace std;

int main()
{
    int A[30][30], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[1][i];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            A[i][j] = A[i - 1][j] + A[i - 1][j + 1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j > n + 1)
            {
                A[i][j] = -1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << " ";
    }
    return 0;
}