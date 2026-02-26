#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n < 2)
    { // factorialul lui 0 = 1, factorialul lui 1 = 1
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n, fact = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << fact << endl;

    cout << factorial(n);
    return 0;
}