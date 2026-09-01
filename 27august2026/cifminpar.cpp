#include <iostream>
using namespace std;

int cifminpar(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            return n;
        else
            return -1;
    }
    else if (n % 2 == 0)
    {
        int cifra_minima = cifminpar(n / 10);
        if (cifra_minima == -1)
        {
            return n % 10;
        }
        else
            return min(cifra_minima, n % 10);
    }
    else
    {
        return cifminpar(n / 10);
    }
}

// 12345
// cifminpar(1234)

// cifra_minima = 2
// if(cifra_minima == -1)

int main()
{
    cout << cifminpar(135);
    return 0;
}