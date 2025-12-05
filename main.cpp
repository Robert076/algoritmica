#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int x = 1, cnt = 0;
    while (x <= b)
    {
        if (cnt == n)
        {
            break;
        }
        if (x >= a)
        {
            cnt++;
            cout << x << " ";
        }
        x = x * 2;
    }
    return 0;
}