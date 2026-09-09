#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256], sep[] = "#", A[50][100];
    cin.getline(s, 256);
    char *p = strtok(s, sep);
    int cnt = 0;
    while (p != NULL)
    {
        strcpy(A[cnt], p);
        cnt++;
        p = strtok(NULL, sep);
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
