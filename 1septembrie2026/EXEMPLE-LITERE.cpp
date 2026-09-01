#include <iostream>
using namespace std;

int main()
{
    char s[256];
    cin.getline(s, 256);
    for (int i = 0; i < strlen(s); i++)
    {

        // toupper("a") -> A
        // toupper("")
    }

    for (int i = 1; i < strlen(s) - 1; i++)
    {
        if (s[i] != ' ') // daca nu e spatiu (e litera, problema ne spune ca avem doar litere mici si spatii)
        {
            if (s[i - 1] == ' ' && s[i + 1] == ' ')
            {
                s[i] = toupper(s[i]);
            }
        }
    }
    return 0;
}

// isalpha() -> verifica daca un caracter e alfanumeric (litera sau cifra)
// de exemplu: isalpha(3) returneaza true, isalpha("$") returneaza false, isalpha("a") returneaza true.

// toupper() -> transforma o litera in varianta ei mare. (daca era deja mare, nu face nimic)
// de exemplu: toupper("a") returneaza "A", toupper("B") returneaza "B"

// tolower() -> inversul lui toupper

// isdigit() -> verifica daca un caracter este cifra
// de exemplu: isdigit(3) returneaza true, isdigit("a") returneaza false, isdigit("$") returneaza false

// Fie s un sir de caractere (char s[256] de ex.), conditia care verifica ca s[i] e litera mica este if(s[i] >= "a" && s[i] <= "z")
// Fie s un sir de caractere (char s[256] de ex.), conditia care verifica ca s[i] e litera mare este if(s[i] >= "A" && s[i] <= "Z")