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
        char s[105], aux;
        cin.getline(s, 105);
        for (int i = 0; i < strlen(s) - 1; i++)
        {
                for (int j = i; j < strlen(s); j++)
                {
                        if (vocala(s[i]) && vocala(s[j]))
                        {
                                if (s[i] < s[j])
                                {
                                        aux = s[i];
                                        s[i] = s[j];
                                        s[j] = aux;
                                }
                        }
                }
        }
        cout << s;
        return 0;
}