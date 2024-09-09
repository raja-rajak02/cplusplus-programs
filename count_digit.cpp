#include <iostream>
using namespace std;

int main()
{
    int num, i;

    cout << "Enter digit: ";
    cin >> num;

    while (num != 0)
    {

        num /= 10;
        i++;
    }
    cout << "here is " << i << " integer" << endl;
    return 0;
}