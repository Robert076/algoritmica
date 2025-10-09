#include <iostream>
using namespace std;
int main()
{
    int n, v[1000001], x, p, i;
    cin >> n >> x >> p;

    // v[i]: 8 4 3 2 90 5
    // i:    0 1 2 3 4  5

    for (i = 1; i <= n; i++)
        cin >> v[i];
    n++;
    for (i = n - 1; i >= p - 1; i--)
        v[i] = v[i - 1];
    v[p - 1] = x;

    for (i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}