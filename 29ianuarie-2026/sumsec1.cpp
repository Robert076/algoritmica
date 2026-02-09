#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, v[1005], primul_impar = 0, ultimul_impar = 0, poz_primul_impar = 0, poz_ultim_impar = 0;
    bool am_gasit_primul_impar = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 1 && am_gasit_primul_impar == false)
        {
            primul_impar = v[i];
            am_gasit_primul_impar = true;
            poz_primul_impar = i;
        }
        if (v[i] % 2 == 1)
        {
            ultimul_impar = v[i];
            poz_ultim_impar = i;
        }
    }

    int suma = 0;
    for (int i = poz_primul_impar; i <= poz_ultim_impar; i++)
    {
        suma += v[i];
    }

    cout << suma;
    return 0;
}