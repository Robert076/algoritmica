#include <fstream>

using namespace std;

ifstream fin("puteri6.in");
ofstream fout("puteri6.out");

int putere10(int n)
{
    int cnt = 0;
    while(n > 1)
    {
        n /= 10;
        cnt ++;
    }
    return cnt;
}

int main()
{
    int n, x, F[12]={0};
    fin >> n;
    while(fin >> x)
    {
        int cnt = putere10(x);
        F[cnt]++;
        // cout << "cnt: " << cnt << endl;
    }
    int cnt = 0;
    for(int p = 0; p <= 9; p++)
    {
        // 100 100000 1 100000 1000 100 10
        //   p: 0 1 2 3 4 5 6 7...
        //F[p]: 1 1 2 1 0 2 0 0...
        while(F[p] > 0)
        {
            cnt ++;
            F[p]--;
            if(cnt == n)
            {
                // cout << "Am gasit cnt=n, i=" << i << endl;
                int rez = 1;
                int putere = 1;
                while(putere <= p)
                {
                    rez = rez * 10; // 10000
                    putere++; // 5
                }
                fout << rez;
                return 0;
            }
            // cout << "Sunt la 10^" << i << ", cnt: " << cnt << endl;
        }
    }
    fout << "Nu exista";
    return 0;
}
