#include <iostream>
using namespace std;
int main()

{

    int x = 10;

    int a;

    x = ++x;

    cout << "Value of x = " << x << endl;

    a = x++;

    cout << "Value of a = " << a << endl;

    cout << "New Value of x = " << x << endl;

    return 0;
}