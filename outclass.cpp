// class add
#include <iostream>
using namespace std;

// class definition here
class Numbers
{
private:
    int a;
    int b;

public:
    // member function declaration
    void readNumbers(void);
    void printNumbers(void);
    int calAddition(void);
};

// member function definitions here
void Numbers::readNumbers(void)
{
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

void Numbers::printNumbers(void)
{
    cout << "a= " << a << ",b= " << b << endl;
}

int Numbers::calAddition(void)
{
    return (a + b);
}

// main function begin
int main()
{

    // declaring object of class number
    Numbers num;
    int add; // variable to store addition of both numbers
    // collect input by using function
    num.readNumbers();
    // find addition of both value
    add = num.calAddition();

    // print numbers
    num.printNumbers();
    // print addition of given values
    cout << "Addition/sum= " << add << endl;

    return 0;
}
