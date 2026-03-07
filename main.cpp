#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char t[] = "abecedar", s[] = "romancier";
    cout << "t: " << t << endl;
    cout << "s: " << s << endl;
    strcpy(t, s);
    cout << "Am copiat \n";
    cout << "t: " << t << endl;
    cout << "s: " << s << endl;
    return 0;
}