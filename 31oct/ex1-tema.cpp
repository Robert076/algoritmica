#include <iostream>
using namespace std;

void f1(int n, int k)
{
    // cand n = 10, k = 2
    int kOriginal = k; // kOriginal = 2
    while (k <= n)     // 6 <= 10 DA
    {
        cout << k << " ";  // afisam 2 4 6
        k = k + kOriginal; // k = 6 + 2
    }
}

int main()
{
    f1(10, 2);
    return 0;
}