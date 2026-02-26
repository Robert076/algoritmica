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

int litera(char c)
{
        if (c >= 'a' && c <= 'z')
        {
                return 1;
        }
        return 0;
}

int toate_3_sunt_litere(char a, char b, char c)
{
        if (litera(a) && litera(b) && litera(c))
        {
                return 1;
        }
        return 0;
}

// SA SE CALCULEZE CATE consoane SUNT INTR-UN SIR
int main()
{
        char s[1001];
        int cnt = 0;
        cin.getline(s, 1001);
        for (int i = 0; i < strlen(s); i++)
        {
                if (!vocala(s[i]) && toate_3_sunt_litere(s[i], s[i - 1], s[i + 1]))
                {
                        cnt++;
                }
        }
        cout << cnt;
        return 0;
}