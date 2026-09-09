#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[] = "Ana are mere";
    // vreau sa pun * dupa "r" din "are"
    strcpy(s, "Mihai are pere");
    cout << s;
    return 0;
}
