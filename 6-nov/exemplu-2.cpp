#include <iostream>
using namespace std;

int main()
{
    // rezolvare clasica
    // int n, v[100001]; // 8 23 98 56 ...
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < 100; i++)
    // {
    //     int cnt = 0;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i == v[j])
    //         {
    //             cnt++;
    //         }
    //     }
    //     if (cnt == 1)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // rezolvare cu vectori de frecventa
    int n, x, v[100] = {0}; // 0 0 0 0 ... 0 de 100 de ori
    // 8 7 2 9 2
    for (int i = 1; i < 100; i++)
    {
        cout << "i: " << i << " v[i]: " << v[i] << endl;
    }
    cout << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // cand i era 1 am citit x=2
        // cand i era 2 am citit x=1
        // cand i era 3 am citit x=2
        // cand i era 4 am citit x=4
        // cand i este 5 citim x = 2
        // cand i = 6 citim x=3
        cin >> x; // cand se citeste 3

        v[x] = v[x] + 1; // 0 2 2 1 1 0 0 ... 0

        // pentru noi, v[i] inseamna DE CATE ORI APARE i
        // cout << v[i] // afisez de cate ori apare numarul i

        // mai demult, in alte probleme, v[i] insemmna al i-lea numar din sir
        // cout << v[i] // afisez al i-lea numar
    } // 0 1 2 3 .. 99

    for (int i = 1; i < 10; i++)
    {
        cout << "i: " << i << " v[i]: " << v[i] << endl;
    }
    for (int i = 0; i < 100; i++)
    {
        if (v[i] == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}

// in cazurile normale, cu vectori normali
// v[i] inseamna numarul de pe pozitia i

// in cazurile cu frecvente, cu vectori de frecventa
// v[i] inseamna de cate ori apare i