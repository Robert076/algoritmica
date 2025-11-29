#include <iostream>
#include <cstring>

using namespace std;

char consoana(char litera)
{
    if (!strchr("aeiou", litera) && litera >= 'a' && litera <= 'z')
    {
        return 1; // returnam 1 daca e consoana
    }
    return 0; // returnam 0 daca nu e
}

int vocala(char s)
{
    if (strchr("aeiou", s))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char s[256];
    int cnt = 0;
    cin.getline(s, 256);
    for (int i = 1; i < strlen(s) - 1; i++)
    {
        if (vocala(s[i]))
        {
            // s[i] e vocala
            // acum verificam daca e inconjurat de consoane
            if (consoana(s[i - 1]) && consoana(s[i + 1]))
            {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}