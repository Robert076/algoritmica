#include <iostream>
using namespace std;

int nr_factori_primi(int n)
{
    int d = 2;
    int cnt = 0;
    while (n > 1)
    {
        if (n % d == 0)
        {
            cnt++;
            while (n % d == 0)
            {
                n /= d;
            }
        }
        else
        {
            d++;
        }
        if (d * d > n)
        {
            d = n;
        }
    }
    return cnt;
}

int main()
{
    cout << nr_factori_primi(24);
    return 0;
}