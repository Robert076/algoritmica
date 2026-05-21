/* Sa se determine cate linii din matrice care sunt de ordin par incep cu un numar impar

Pentru matricea n=3, m=4
1 2 3 4
5 6 7 8
9 10 11 12

raspunsul este 1 pentru ca linia 2 e singura linie de ordin par, si incepe cu un numar impar
*/
#include <iostream>

using namespace std;

int main()
{
    int n, m, A[105][105], cnt=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2==0 && A[i][1]%2!=0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
