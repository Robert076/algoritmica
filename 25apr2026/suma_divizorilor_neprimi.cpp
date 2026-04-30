#include <iostream>
using namespace std;
int prim(int n)
{
        if (n == 0 || n == 1)
        {
                return 0;
        }
        if (n > 2 && n % 2 == 0)
                return 0;
        for (int d = 3; d * d <= n; d += 2)
                if (n % d == 0)
                        return 0;
        return 1;
}
int main()
{
        int n, s = 0;
        cin >> n;
        return 0;
}