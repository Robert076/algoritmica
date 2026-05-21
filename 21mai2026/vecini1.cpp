#include <fstream>
using namespace std;
ifstream fin("vecini1.in");
ofstream fout("vecini1.out");

int main()
{
    int A[105][105], n, m, vecin_sus, vecin_st, vecin_dr, vecin_jos, cnt = 0;
    fin >> n >> m;
    for(int i = 1; i <= n; i ++)
    {
        for(int j = 1; j <= m; j ++)
        {
            fin >> A[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            vecin_st = -1, vecin_dr = -2, vecin_sus = -3, vecin_jos = -4;
            if(i > 1) // avem vecin sus (nu suntem pe prima linie, deci putem scadea linia)
            {
                vecin_sus = A[i - 1][j];  
            }
            if(i < n) // avem vecin jos (nu suntem pe ultima linie, deci putem aduna 1 la linie)
            {
                vecin_jos = A[i + 1][j];
            }
            if(j > 1) 
            {
                vecin_st = A[i][j - 1];
            }
            if(j < m)
            {
                vecin_dr = A[i][j + 1];
            }
            if(vecin_st != vecin_dr && vecin_st != vecin_jos && vecin_st != vecin_sus && vecin_sus != vecin_jos && vecin_sus != vecin_dr && vecin_jos != vecin_dr)
            {
                cnt ++;
            }
        }
    }
    fout << cnt;
    return 0;
}

