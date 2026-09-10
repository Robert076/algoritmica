#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[260], sep[] = " ", *p, A[200][200];
    int k = 0, aux;
    cin.getline(s, 260);
    p = strtok(s, sep);
    while (p != NULL)
    {
        k++;
        strcpy(A[k], p);
        p = strtok(NULL, sep);
    }
    for (int i = 1; i <= k; i++)
    {
        bool vocale = true;
        for (int j = 0; j < strlen(A[i]); j++)
        {
            if (!(strchr("aeiouAEIOU", A[i][j])))
            {
                vocale = false;
            }
        }
        if (vocale == true)
            cout << A[i] << endl;
    }
    return 0;
}