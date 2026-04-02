#include <fstream>
using namespace std;
ifstream fin("sortcif.in");
ofstream fout("sortcif.out");
int main()
{
        int v[100], n, si, sj, ci, cj, aux;
        fin >> n;
        for (int i = 1; i <= n; i++)
        {
                fin >> v[i];
        }
        for (int i = 1; i < n; i++)
        {
                for (int j = i + 1; j <= n; j++)
                {
                        ci = v[i];
                        si = 0;
                        while (ci > 0)
                        {
                                si = si + ci % 10;
                                ci = ci / 10;
                        }
                        cj = v[j];
                        sj = 0;
                        while (cj > 0)
                        {
                                sj = sj + cj % 10;
                                cj = cj / 10;
                        }
                        if (si > sj)
                        {
                                aux = v[i];
                                v[i] = v[j];
                                v[j] = aux;
                        }
                }
        }
        for (int i = 1; i <= n; i++)
        {
                fout << v[i] << " ";
        }
        return 0;
}
