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
        char s[1001];
        int cnt = 0;
        cin.getline(s, 1001);
        // pana la lungime -1 ca sa nu iesim din sir cu s[i+1]
        for (int i = 0; i < strlen(s) - 1; i++)
        {
                if (vocala(s[i]) && isdigit(s[i + 1]))
                {
                        cnt++;
                }
        }
        cout << cnt;
        return 0;
}