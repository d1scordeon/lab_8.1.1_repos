#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

bool IsOrNot(char* s)
{
    for (size_t i = 0; i < strlen(s) - 2; i++)
        if (s[i] == 'o' && s[i + 1] == 'n' ||
            s[i] == 'n' && s[i + 1] == 'o')
            return true;
    return false;
}

char* change(char* s)
{
    char* sNew = new char[101];
    size_t l = 0;
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'o' && s[i + 1] == 'n' ||
            s[i] == 'n' && s[i + 1] == 'o')
        {
            sNew[l] = '*';
            sNew[l + 1] = '*';
            sNew[l + 2] = '*';

            l += 3;
            i += 2;
        }
        else
        {
            sNew[l] = s[i];
            ++l;
        }
    }
    sNew[l] = '\0';
    strcpy_s(s, strlen(sNew) + 1, sNew);
    delete[] sNew;
    return s;
}

int main()
{
    char* s = new char[101];
    cout << "Enter string:" << endl;
    cin.getline(s, 100);
    if (IsOrNot(s))
    {
        char* t = change(s);
        cout << t;
    }
    else
        cout << "on or no is not found.";
    delete[] s;
    cout << endl;
}