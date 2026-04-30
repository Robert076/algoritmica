/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
bool prim(int n)
{
        if (n < 2)
                return false;
        if (n % 2 == 0 && n > 2)
                return false;
        for (int d = 3; d * d <= n; d += 2)
        {
                if (n % d == 0)
                        return false;
        }
        return true;
}
int main()
{
        int n, A[100][100];
        cin >> n; // n - nr de linii, m - nr de coloane
        for (int i = 1; i <= n; i++)
        {
                for (int j = 1; j <= n; j++)
                {
                        cin >> A[i][j];
                }
        }

        for (int i = 1; i <= n; i++)
        {
                for (int j = 1; j <= n; j++)
                {
                        if (i == j)
                        {
                                cout << "Elementul " << A[i][j] << " este pe diagonala principala" << endl;
                        }
                        if (i + j == n + 1)
                        {
                                cout << "Elementul " << A[i][j] << " este pe diagonala principala" << endl;
                        }
                }
        }
        return 0;
}