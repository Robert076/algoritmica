#include <iostream>

using namespace std;

int main()
{
    int n, m, A[1001], B[1001]; // B e secventa din A
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        cin >> A[i];
    }
    cin >> m;
    for(int i = 1; i <= m; i ++)
    {
        cin >> B[i];
    }
    for(int i = 1; i <= n - m; i ++)
    {
        /*
        10
        8 5 8 5 2 3 10 7 1 6 
        6
        8 5 2 3 10 7
        */
        bool ok = true;
        for(int j = 1; j <= m; j++)
        {
            if(B[j] != A[i + j - 1])
            {
                ok = false;
            }
        }
        if(ok)
        {
            cout << i;
            return 0;
        }
    }
    cout << "NU";
    return 0;
}
