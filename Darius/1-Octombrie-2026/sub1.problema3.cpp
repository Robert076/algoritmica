#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("bac.txt");

int VARIANTA1()
{
    int n, m, A[1001], B[100001]; // A[CATE_ELEMENTE_SUNT_IN_A], B[CARE_E_ELEMENTUL_MAXIM_IN_B]
    int x;
    fin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        fin >> A[i];
        // 2 9 3 4 6 7 4 3
    }
    for (int i = 1; i <= m; i++)
    {
        fin >> x;
        B[x]++;
        // 2 8 3 9 4 56 2 2
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        // i:    1 2 3 4 5 6 7 8 9 10
        // A[i]: 2 9 3 4 6 7 4 3 2 2

        if (B[A[i]] > 0)
        {
            cnt++;
        }
    }
    cout << cnt;
}

int VARIANTA2()
{
    int n, m, A[1000001] = {0}, B[1000001] = {0}; // A[CATE_ELEMENTE_SUNT_IN_A], B[CARE_E_ELEMENTUL_MAXIM_IN_B]
    int x;
    fin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        fin >> x;
        A[x]++;
    }
    for (int i = 1; i <= m; i++)
    {
        fin >> x;
        B[x]++;
    }
    int cnt = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        if (A[i] > 0 && B[i] > 0)
        {
            // 2 9 3 4 6 7 4 3 2 2
            // i:    1 2 3 4 5 6 7 8 9 10
            // A[i]: 0 3 2 2 0 1 0
            cnt += A[i];
        }
    }
    cout << cnt;
}