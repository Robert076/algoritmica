#include <fstream>

using namespace std;

ifstream fin("unice.in");
ofstream fout("unice.out");

int main()
{
    int n, v[100001], f[100] = {0};
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> v[i];
        if (v[i] < 100)
        {
            f[v[i]]++;
        }
    }
    for (int i = 0; i <= 99; i++)
    {
        if (f[i] == 1)
        {
            fout << i << " ";
        }
    }
    // for (int i = 10; i <= 99; i++)
    // {
    //     cout << "i: " << i << " ," << "f[i]: " << f[i] << endl;
    // }
    return 0;
}