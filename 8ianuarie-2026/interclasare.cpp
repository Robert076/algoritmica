#include <fstream>

using namespace std;

ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

int main()
{
    int n, m, v[100001], p[100001];
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> v[i];
    }
    fin >> m;
    for (int i = 1; i <= m; i++)
    {
        fin >> p[i];
    }
    int i = 1, j = 1, k = 1, q[200001];
    // cat timp nu am terminat niciun vector executa asta
    while (i <= n && j <= m)
    {
        if (v[i] < p[j])
        {
            q[k] = v[i];
            k++;
            i++;
        }
        else
        {
            q[k] = p[j];
            k++;
            j++;
        }
    }

    // dupa ce am terminat unul din vectori, daca mai pot merge cu i (primul nu e gata)
    while (i <= n)
    {
        q[k] = v[i];
        k++;
        i++;
    }

    // dupa ce am terminat unul din vectori, daca mai pot merge cu j (al doilea nu e gata)
    while (j <= m)
    {
        q[k] = p[j];
        k++;
        j++;
    }

    for (int i = 1; i < k; i++)
    {
        if (i % 10 == 1 && i != 1)
        {
            fout << endl;
        }
        fout << q[i] << " ";
    }

    return 0;
}