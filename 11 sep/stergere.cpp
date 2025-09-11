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
    n++;
    A[n] = 10;
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}