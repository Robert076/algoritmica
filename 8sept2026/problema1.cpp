#include <iostream>
#include <cstring>
using namespace std;

bool vocala(char s)
{
    if (strchr("aeiouAEIOU", s))
    {
        return true;
    }
    return false;
}

int main()
{
    char s[11];
    bool am_gasit_prima_vocala = false;
    int pozitia_primei_vocale = -1, pozitia_ultimei_consoane = -1;
    cin.getline(s, 11);
    for (int i = 0; i < strlen(s); i++)
    {
        if (vocala(s[i]))
        {
            if (am_gasit_prima_vocala == false)
            {
                am_gasit_prima_vocala = true;
                pozitia_primei_vocale = i;
            }
        }
        else
        {
            pozitia_ultimei_consoane = i;
        }
    }
    if (pozitia_primei_vocale == -1 || pozitia_ultimei_consoane == -1)
    {
        cout << "IMPOSIBIL";
    }
    else
    {
        char aux = s[pozitia_primei_vocale];
        s[pozitia_primei_vocale] = s[pozitia_ultimei_consoane];
        s[pozitia_ultimei_consoane] = aux;
        cout << s;
    }
    return 0;
}
