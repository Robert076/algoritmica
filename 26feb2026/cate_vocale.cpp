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

// SA SE CALCULEZE CATE VOCALE SUNT INTR-UN SIR

int main()
{
        char s[1001];
        int cnt = 0;
        cin.getline(s, 1001);
        for (int i = 0; i < strlen(s); i++)
        {
                if (vocala(s[i]))
                {
                        cnt++;
                }
        }
        cout << cnt;
        return 0;
}