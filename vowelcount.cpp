#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100];

    cout << "Enter a word:";
    cin >> str;
    cout << "Vowels:";
    for (char c : str)
    {

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {

            cout << c << " ";
        }

        /* switch(tolower(c))
         {
         case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'u':
             cout << c << " ";
             break;
         }*/
    }
    cout << endl;
    return 0;
}