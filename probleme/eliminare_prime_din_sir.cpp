#include <iostream>
using namespace std;

int main()
{
    int n, v[1001], i, d, nr;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (i = 0; i < n; i++)
    {

        int prim = 1; // presupunem ca e prim
        if (v[i] == 0 || v[i] == 1)
        {
            prim = 0; // 0 si 1 nu sunt prime
        }
        if (v[i] != 2 && v[i] % 2 == 0) // orice nr par diferit de 2 nu e prim
        {
            prim = 0; // marcam ca nu e pri
        }
        for (int d = 3; d * d <= v[i]; d = d + 2) // divizorii vin mereu in pereche, unul inainte de radical si unul dupa radical(de ex la 12: 2 cu 6, 3 cu 4, 1 cu 12)
        {                                         // deci daca nu gasim ceva inainte de radical nu vom gasi nici dupa
            if (v[i] % d == 0)
            {
                prim = 0; // am gasit un divizor, marcam ca nu e prim numarul curent
            }
        }

        if (prim == 1)
        {
            for (int j = i; j < n - 1; j++)
            {
                v[j] = v[j + 1]; // mut elementele la stanga peste cel curent
            }
            i--; // mai verific o data pozitia daca cumva am mutat ceva prim in locul numarului curent
            n--; // scad nr total de numere
        }
    }
    for (i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}