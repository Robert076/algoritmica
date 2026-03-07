#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("palindrom.in");
ofstream fout("palindrom.out");
bool palindrom(char s[])
{
        for (int i = 0; i < strlen(s) / 2; i++)
        {
                if (s[i] != s[strlen(s) - 1 - i])
                {
                        return false;
                }
        }
        return true;
}
int main()
{
        char s[105];
        int n;
        fin >> n;
        for (int i = 1; i <= n; i++)
        {
                fin >> s;
                fout << palindrom(s) << endl;
        }

        return 0;
}