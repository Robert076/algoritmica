#include <iostream>

using namespace std;

int main()
{
    int n, A[101][101];

    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << A[i][j] << " ";
        cout << "\n";
    }
    cout << "Hello world!";
    return 0;
}