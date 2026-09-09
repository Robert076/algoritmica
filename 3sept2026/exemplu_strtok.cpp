#include <iostream>
#include <cstring>
using namespace std;

bool vocala(char s)
{
    return strchr("aeiouAEIOU", s);
}
int main()
{
    char s[256], sep[] = " e", *p, A[50][100];
    int k = 0;
    cin.getline(s, 256);
    p = strtok(s, sep);
    while (p != NULL)
    {
        k++;
        strcpy(A[k], p);
        p = strtok(NULL, sep);
    }
    for (int i = 1; i <= k; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
// int main()
// {
//     char s[259], sep[] = ",.?! ", *p, A[259][100];
//     int k = 0, cnt;
//     cin.getline(s, 259);
//     p = strtok(s, sep);
//     while (p != NULL)
//     {
//         k++;
//         strcpy(A[k], p);
//         if (vocala(p[0]) && vocala(p[strlen(p) - 1]))
//             cnt++;
//         p = strtok(NULL, sep);
//     }
//     cout << cnt;
//     return 0;
// }
