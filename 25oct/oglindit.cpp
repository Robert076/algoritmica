#include <iostream>
using namespace std;
int main()
{
    int n, oglindit = 0;
    cin >> n;
    while (n > 0)
    {
        int ultima_cifra_a_lui_n = n % 10;
        oglindit = oglindit * 10 + ultima_cifra_a_lui_n;
        n /= 10;
    }
    cout << oglindit;
    return 0;
}