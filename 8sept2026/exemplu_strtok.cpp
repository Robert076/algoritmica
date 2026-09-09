#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256], sep[] = " ", A[50][100];
    cin.getline(s, 256);
    char *p = strtok(s, sep);
    int cnt = 0;
    while (p != NULL)
    {
        strcpy(A[cnt], p);
        // echivalent cu: A[cnt] = p;
        cnt++;
        p = strtok(NULL, sep);
    }
    char aux[256];
    strcpy(aux, A[0]);
    strcpy(A[0], A[2]);
    strcpy(A[2], aux);
    for (int i = 0; i < cnt; i++)
    {
        cout << A[i] << endl;
    }
    // cum sortez primul cuvant (A[0])
    // merg pana la cate litere are A[0] - 1 cu i
    // merg de la pozitia aia + 1 cu j
    for (int i = 0; i < strlen(A[0]) - 1; i++)
    {
        for (int j = i + 1; j < strlen(A[0]); j++)
        {
            if (A[0][i] > A[0][j])
            {
                char aux = A[0][i];
                A[0][i] = A[0][j];
                A[0][j] = aux;
            }
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
