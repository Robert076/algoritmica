#include <iostream>
#include <cstring>
using namespace std;

int palindrom(char s[256])
{
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    if (palindrom("capac2"))
        cout << "Palindrom";
    else
        cout << "Nu e palindrom";
    return 0;
}