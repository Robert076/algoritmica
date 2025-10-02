#include <iostream>
using namespace std;

int main()
{
    int n, c, maxim = -1;
    cin >> n;
    while (n > 0)
    {
        c = n % 10;
        if (c > maxim)
            maxim = c;
        n = n / 10;
    }
    cout << maxim;
    return 0;
}