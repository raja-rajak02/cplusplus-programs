#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    int a, b, c, choice, addition, substraction, multiplication, division, module;
    char n, yes;
    cout << "\t\tenter value of a:: ";
    cin >> a;
    cout << "\t\tenter a value of b::";
    cin >> b;

    cout << "1.addition" << endl;
    cout << "2.substraction" << endl;
    cout << "3.multiplication" << endl;
    cout << "4.division" << endl;
    cout << "5.modules" << endl;
    cout << "\t\tenter your choice :-";
    cin >> choice;
    cout << endl;

    if (choice == 1)
    {
        addition = a + b;
        cout << "\t\taddition of number::" << addition << endl;
        cout << endl;
    }
    else if (choice == 2)
    {
        substraction = a - b;
        cout << " \t\tsubstraction of number::" << substraction << endl;
        cout << endl;
    }
    else if (choice == 3)
    {
        multiplication = a * b;
        cout << "\t\t multiplication of number::" << multiplication << endl;
        cout << endl;
    }
    else if (choice == 4)
    {
        division = a / b;
        cout << " \t\t division of number::" << division << endl;
        cout << endl;
    }
    else if (choice == 5)
    {
        module = a % b;
        cout << "\t\t module of number::" << module << endl;
        cout << endl;
    }
    else
    {
        cout << "\t\tinvalid choice";
        cout << endl;
    }
    return 0;
}