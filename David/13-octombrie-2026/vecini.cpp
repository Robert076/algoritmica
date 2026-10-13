#include <iostream>
using namespace std;
int main()
{
    int n, A[101][101];
    cin >> n;
    bool exista = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }
    /*  2 3 4
    /   0 2 1
    /   3 6 3
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            bool are_vecin_sus = false;
            if (i != 1)
            {
                are_vecin_sus = true;
            }
            bool are_vecin_jos = false;
            if (i != n)
            {
                are_vecin_jos = true;
            }
            bool are_vecin_stanga = false;
            if (j != 1)
            {
                are_vecin_stanga = true;
            }
            bool are_vecin_dreapta = false;
            if (j != n)
            {
                are_vecin_dreapta = true;
            }
            if (are_vecin_dreapta && are_vecin_stanga && are_vecin_jos && are_vecin_sus)
            {
                // verific toti vecinii
                // verifici toti 4 (A[i-1][j], A[i][j-1], A[i][j+1], A[i+1][j])
            }
            else if (are_vecin_dreapta && are_vecin_stanga && are_vecin_jos && !are_vecin_sus)
            {
            }
        }
    }
    if (exista == false)
    {
        cout << "nu exista";
    }
    return 0;
}
