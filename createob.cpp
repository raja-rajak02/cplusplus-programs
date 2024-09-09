// TODO:Program to keep count of created objects using static members.
#include <iostream>
using namespace std;
class X
{
    int codeno;
    float price;
    static int count;

public:
    void getval(int i, float j)
    {
        codeno = i;
        price = j;
        ++count;
        // static data member
    }
    void display(void)
    {
        cout << " Code no : " << codeno << " It";
        cout << "Price : " << price << " In";
    }
    static void discount(void)
    // static member function
    {
        cout << " count = " << count << "In";
    }
};

int X ::count = 0;

int main()
{
    X Ob1, Ob2;
    Ob1.getval(101, 25.12);
    Ob2.getval(102, 38.19);
    X ::discount();
    X Ob3;
    Ob3.getval(103, 49.00);
    X ::discount();
    Ob1.display();
    Ob2.display();
    Ob3.display();
    return 0;
    // invoke static function
}
