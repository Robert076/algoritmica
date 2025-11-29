#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "salut";
    char b[] = "pa";
    strcpy(b, a);
    cout << b;
    return 0;
}