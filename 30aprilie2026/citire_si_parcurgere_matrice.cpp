
#include <iostream>
using namespace std;

int main()
{
        int n, m, A[100][100];
        cin >> n >> m; // n - nr de linii, m - nr de coloane
        for (int i = 1; i <= n; i++)
        {
                for (int j = 1; j <= m; j++)
                {
                        cin >> A[i][j];
                }
        }

        for (int i = 1; i <= n; i++)
        {
                for (int j = 1; j <= m; j++)
                {
                        cout << A[i][j] << " ";
                }
                cout << endl;
        }
        return 0;
}