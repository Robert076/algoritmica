#include <iostream>
using namespace std;
int main()
{
    int n, oglindit = 0, A[101];
    bool am_gasit = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    int copie_primul_element = A[1];
    while (copie_primul_element > 0)
    {
        int ultima = copie_primul_element % 10;
        oglindit = oglindit * 10 + ultima;
        copie_primul_element /= 10;
    }
    for (int i = 2; i <= n; i++)
    {
        // incep de la 2 pentru ca nu ma intereseaza primul element
        // iar daca cumva a[1] = 333
        // oglinditul lui e tot 333 si nu va da corect (va crede ca a gasit oglindit cand nu a gasit)
        if (A[i] == oglindit)
        {
            am_gasit = true;
        }
    }

    if (am_gasit == true)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}
