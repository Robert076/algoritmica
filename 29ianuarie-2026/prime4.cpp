#include <fstream>

using namespace std;

ifstream fin("prime4.in");
ofstream fout("prime4.out");

bool esteprim(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    if (n > 2 && n % 2 == 0)
    {
        return false;
    }
    for (int d = 3; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, f[1000] = {0}, x, max = -10;
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> x;
        if (x < 1000)
        {
            f[x]++;
        }
    }
    for (int i = 1; i < 1000; i++)
    {
        if (max < f[i] && esteprim(i))
        {
            max = f[i];
        }
    }
    for (int i = 1; i < 1000; i++)
    {
        if (f[i] == max && esteprim(i))
        {
            fout << i << " ";
            break;
        }
    }
    return 0;
}
