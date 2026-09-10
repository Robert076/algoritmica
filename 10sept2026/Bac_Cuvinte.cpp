#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[260], sep[] = " ", *p, A[200][200];
    int k = 0, n;
    bool cuvinte = false;
    cin.getline(s, 260);
    cin >> n;
    p = strtok(s, sep);
    while (p != NULL)
    {
        k++;
        strcpy(A[k], p);
        p = strtok(NULL, sep);
    }
    for (int i = 1; i <= k; i++)
    {
        cout << endl
             << "i: " << i << ", A[i]: "
             << A[i] << endl;
        if (strlen(A[i]) == n)
        {
            cuvinte = true;
            cout << A[i] << endl;
        }
    }
    if (cuvinte == false)
        cout << "nu exista";
    return 0;
}
