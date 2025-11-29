#include <fstream>

using namespace std;
ifstream fin("crb.in");
ofstream fout("crb.out");
int main()
{
    int n, v[1001], c[1001], nr = 0, aux;
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> v[i];
        c[i] = v[i];
    }
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == c[i])
        {
            nr = nr + 1;
        }
    }
    fout << nr;
    return 0;
}