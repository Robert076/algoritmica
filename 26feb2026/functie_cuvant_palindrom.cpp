#include <cstring>

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