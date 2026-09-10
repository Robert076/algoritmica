#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[260], sep[] = " ", *p, A[200][200], maxim[256];
    int k = 0;
    int cifra_maxima = 0;
    bool am_gasit_numar = false;
    cin.getline(s, 260);
    p = strtok(s, sep);
    while (p != NULL)
    {
        if (isdigit(p[0]))
        {
            k++;
            strcpy(A[k], p);
            am_gasit_numar = true;
        }
        p = strtok(NULL, sep);
    }
    for (int i = 1; i <= k; i++)
    {
        // 50 = 0
        // 51 = 1
        // ...
        // 59 = 9
        // A[i][j] = '9'
        // A[i][j] - '0' = 9
        if (A[i][0] - '0' > cifra_maxima)
        {
            strcpy(maxim, A[i]);
            cifra_maxima = A[i][0] - '0';
        }
    }
    if (am_gasit_numar == true)
        cout << maxim;
    else
        cout << "nu exista";
    return 0;
}