#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main()
{
        char s[256];
        bool caps = false; // false - tasta nu e apasata, true - tasta e apasata
        fin.getline(s, 256);
        for (int i = 0; i < strlen(s); i++)
        {
                if (s[i] == '#')
                {
                        if (caps == true)
                        {
                                caps = false;
                        }
                        else
                        {
                                caps = true;
                        }
                        strcpy(s + i, s + i + 1);
                }
                if (caps == true && s[i] != '#' && s[i] != ' ')
                {
                        s[i] = toupper(s[i]);
                }
        }
        fout << s;
        return 0;
}