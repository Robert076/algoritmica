#include <iostream>
using namespace std;

int main()
{
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                char s[256];
                cin >> s;
                bool este_doar_din_vocale = true;
                for (int j = 0; j < strlen(s); j++)
                {
                        if (!este_vocala(s[i]))
                        {
                                este_doar_din_vocale = false;
                        }
                }
                if (este_doar_din_vocale)
                {
                        cnt++;
                }
        }
        cout << cnt;
        return 0;
}
