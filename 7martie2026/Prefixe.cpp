#include <iostream>
#include <cstring>
using namespace std;

int main()
{
        char s[105];
        cin >> s;
        for (int i = 0; i < strlen(s); i++)
        {
                for (int j = 0; j < strlen(s) - i; j++)
                {
                        cout << s[j];
                }
                cout << endl;
        }
        for (int i = 0; i < strlen(s); i++)
        {
                for (int j = i; j < strlen(s); j++)
                {
                        cout << s[j];
                }
                cout << endl;
        }
        return 0;
}