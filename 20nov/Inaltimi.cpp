#include <iostream>
using namespace std;

int main()
{
    int n, aux, A[1001], Pozitii[1001];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        Pozitii[i] = i;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (A[i] > A[j])
            {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;

                aux = Pozitii[i];
                Pozitii[i] = Pozitii[j];
                Pozitii[j] = aux;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << Pozitii[i] << " ";
    }
    return 0;
}