#include <iostream>
#include <cstring>
using namespace std;
bool este_vocala(char a)
{
    if (strchr("aeiou", a))
    {
        return true;
    }
    return false;
}

int main()
{
    char s[21];
    cin.getline(s, 21);
    for (int i = 0; i < strlen(s); i++)
    {
        if (este_vocala(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s;
    return 0;
}