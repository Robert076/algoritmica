#include <iostream>

using namespace std;
int nr_palindrom(long long n)
{
        long long inv = 0, copie = n;
        while (n)
        {
                inv = inv * 10 + n % 10;
                n /= 10;
        }
        if (copie == inv)
        {
                return 1;
        }
        return 0;
}
int main()
{
        long long x, maxim = -1;
        int cnt = 0;
        while (cin >> x)
        {
                if (x == 0)
                {
                        break;
                }
                if (nr_palindrom(x))
                {
                        if (x > maxim) // x = 98789 maxim = -1
                        {
                                maxim = x; // maxim = 98789
                                cnt = 1;   // cnt = 1
                        }
                        else if (x == maxim) // x = 98789 maxim = 98789
                        {
                                cnt++; // cnt = 2
                        }
                }
        }
        cout << maxim << " " << cnt;
        return 0;
}
