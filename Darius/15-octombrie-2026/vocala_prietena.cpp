#include <iostream>
#include <cstring>

using namespace std;

char vocalaPrietena(char c)
{
    bool gasit = false;
    char vocala_gasita = 'a';
    for(char litera = c; litera >= 'a'; litera--)
    {
        if(strchr("aeiou", litera) && gasit == false)
        {
            gasit = true;
            vocala_gasita = litera;
        }
    }
    return vocala_gasita;
}

int main()
{
    char s[55];
    cin >> s;
    for(int i = 0; i < strlen(s); i++)
    {
        if(!strchr("aeiou", s[i]))
        {
            s[i] = vocalaPrietena(s[i]);
        }
    }
    cout << s;
    return 0;
}

