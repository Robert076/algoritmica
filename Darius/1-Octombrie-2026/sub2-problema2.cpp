#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    char *p, A[101][101];
    int k = 0;
    p = strtok(s, " .");
    while (p != NULL)
    {
        strcpy(A[k], p);
        k++;
        p = strtok(NULL, " .");
    }
    // fam. blabla gen. blabla spe. blabla
    char rez[120];
    strcpy(rez, "fam. ");
    strcpy(rez + 5, A[1]);
    strcpy(rez + 5 + strlen(A[1]), " gen. ");
    strcpy(rez + 5 + strlen(A[1]) + 6, A[3]);
    strcpy(rez + 5 + strlen(A[1]) + 6 + strlen(A[3]), " spe. ");
    strcpy(rez + 5 + strlen(A[1]) + 6 + strlen(A[3]) + 6, A[5]);
    cout << rez;
    return 0;
}