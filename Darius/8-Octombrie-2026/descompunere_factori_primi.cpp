#include <iostream>
#include <cstring>
using namespace std;

int nr_divizori(int n)
{
    int d = 2, cnt = 1;
    while (n > 1)
    {
        if (n % d == 0) // am gasit un alt factor prim
        {
            int e = 0;         // incepem de la exponentul 0
            while (n % d == 0) // il tot impart
            {
                e++; // si intre timp cresc exponentul la fiecare impartire
                n /= d;
            }
            cnt = cnt * (e + 1);
        }
        d++;
        if (d * d > n)
            d = n;
    }
    return cnt;
}

int min_div_primi(int n)
{
    int d = 2, nr_min = 1;
    while (n > 1)
    {
        if (n % d == 0) // am gasit un alt factor prim
        {
            while (n % d == 0) // il tot impart
            {
                n /= d;
            }
            nr_min = nr_min * d;
        }
        d++;
        if (d * d > n)
            d = n;
    }
    return nr_min;
}

int main()
{

    return 0;
}