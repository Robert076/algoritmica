#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

bool prim(int n)
{
    if (n < 2)
        return false;
    if (n > 2 && n % 2 == 0)
        return false;
    for (int d = 3; d * d <= n; d += 2)
        if (n % d == 0)
            return false;
    return true;
}

int main()
{
    // Gaseste prima pereche de numere prime citite de la tastatura consecutiv
    int x, a, b;
    int ultimul = 0;
    bool ultimul_este_prim = false;
    // 2 4 5 7
    while (fin >> x) // x = 7
    {
        if (prim(ultimul) && prim(x))
        {
            cout << ultimul << " " << x;
            return 0;
        }
        ultimul = x; // ultimul = 5
    }
    return 0;
}