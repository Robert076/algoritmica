#include <iostream>

using namespace std;

int main()
{
    int n, A[1001] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    int x = 70;
    int pozitie = 3;
    // 1 2 3 4 5 6 7, n = 7
    // prima data il cresc pe n, deci n++ => n=8
    // 1 2 3 4 5 6 7 _, n = 8
    // 1 2 _ 3 4 5 6 7
    n++;
    for (int i = n; i >= pozitie; i--)
    {
        A[i] = A[i - 1];
    }
    A[pozitie] = x;
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}