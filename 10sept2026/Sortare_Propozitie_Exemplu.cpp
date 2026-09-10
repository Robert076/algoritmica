#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    cout << strcmp("zana", "baba");
    // strcmp(a, b) = 1 daca a este lexicografic dupa b
    //              = 0 daca a = b
    //              = -1 daca a este lexicografic inate de b
    //              unde a si b sunt siruri de caractere
    // A -> 65 ... Z = 92, a = 97 -> z = 122
    char s[256] = "Propozitia asta va fi sortata alfabetic", *p, A[100][50];
    int k = 0;
    char sep[] = " ";
    p = strtok(s, sep);
    while (p != NULL)
    {
        k++;
        strcpy(A[k], p);
        p = strtok(NULL, sep);
    }
    for (int i = 1; i < k; i++)
    {
        for (int j = i + 1; j <= k; j++)
        {
            if (strcmp(A[i], A[j]) > 0)
            {
                char aux[256];
                strcpy(aux, A[i]);
                strcpy(A[i], A[j]);
                strcpy(A[j], aux);
            }
        }
    }
    for (int i = 1; i <= k; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
