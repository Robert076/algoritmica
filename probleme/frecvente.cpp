#include <iostream>

using namespace std;

int main()
{
    int n, x, A[101] = {0};
    // 1 2 3 4 5 6 7 8 9 10 ... 100
    // 0 0 0 0 0 0 0 0 0 0 ....   0
    cout << "n: ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "x: ";
        cin >> x;
        cout << endl;

        for (int i = 1; i <= 10; i++)
        {
            cout << A[i] << " ";
        }
        A[x] = A[x] + 1;
    }
    return 0;
}