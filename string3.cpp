#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char str[200];
    char c;
    int len = 0, i = 0;
    cout << "Enter the String ";
    fgets(str, 200, stdin);

    cout << "Vowels:";
    while (str[i])
    {
        if (str[i] == ' ')
        {
            len++;
            str[i] = '-';
        }
        i++;
    }
    for (char c : str)
    {

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {

            cout << c << " ";
        }
    }
    cout << endl;
    cout << "replace str: " << str << endl;
    cout << "number of words:" << len + 1 << endl;
    cout << "\nspace = " << len;
    cout << endl;
    return 0;
}