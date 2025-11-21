#include <iostream>

using namespace std;

int main()
{
    int n, x, d, k = 0, v[10] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[x]++;
    }

    for (int i = 9; i >= 2; i--)
    {
        int nr_divizori = 0;
        for (int d = 1; d <= i; d++)
        {
            if (i % d == 0)
            {
                nr_divizori++;
            }
        }

        if (v[i] > 0 && nr_divizori == 2)
        {
            cout << i << " " << v[i];
            break;
        }
    }

    return 0;
}
