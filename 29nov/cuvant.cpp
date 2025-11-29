#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char v[101];
    bool este_ok = true;
    cin.getline(v, 101);
    for (int i = 0; i < strlen(v); i++)
    {
        // ne spune sa verificam daca cuvantul contine doar consoane SAU vocala i
        // deci daca gasim orice alta vocala, clar nu e corect
        if (strchr("aeouAEOU", v[i]))
        {
            este_ok = false;
        }
    }
    if (este_ok)
    {
        bool am_gasit_consoane = false;
        int n = strlen(v);
        for (int i = 0; i < strlen(v); i++)
        {
            if (!strchr("iI", v[i]))
            {
                am_gasit_consoane = true;
            }
        }
        if (am_gasit_consoane)
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
    }
    else
    {
        cout << "NU";
    }
    return 0;
}