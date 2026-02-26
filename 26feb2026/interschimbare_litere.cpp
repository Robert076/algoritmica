#include <iostream>
#include <cstring>
using namespace std;
int vocala(char s)
{
        if (strchr("AEIOUaeiou", s))
        {
                return 1;
        }
        return 0;
}
int main()
{
        char s[11], aux;
        bool gasit = false;
        int poz_vocala = 0;
        int poz_consoana = 0;
        cin >> s;
        for (int i = 0; i < strlen(s); i++)
        {
                if (vocala(s[i]) && gasit == false)
                {
                        gasit = true;
                        poz_vocala = i;
                }
                if (!vocala(s[i]))
                {
                        poz_consoana = i;
                }
        }
        if (poz_vocala != 0 && poz_consoana != 0)
        {
                aux = s[poz_vocala];
                s[poz_vocala] = s[poz_consoana];
                s[poz_consoana] = aux;
                cout << s;
        }
        else
        {
                cout << "IMPOSIBIL";
        }

        return 0;
}