#include <iostream>

using namespace std;

int main()
{
    int n, A[1001] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    // facem o stergere pe ultimul element
    n--;
    cout << "Stergerea ultimului element:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    // 1 2 2 3  6 7 8 9 10 11
    n++;
    int pozitie = 2;
    for (int i = pozitie; i <= n; i++)
    {
        A[i] = A[i + 1];
    }
    n--;
    cout << "Stergerea unui element oarecare: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    cout << A[n];
    return 0;
}