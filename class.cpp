#include <iostream>
using namespace std;

class Add
{

public:
    int addition(int x, int y) //TODO: here x&y is formal parameter
    {
        return x + y;
    }

}; //FIXME: class definition over

int main()
{

    int x, y, s;

    cout << "Enter two numbers:";
    cin >> x >> y;

    Add obj;                //TODO: creation of obj of class Add
    s = obj.addition(x, y); //TODO: function call using obj (dot(.) operator) // x&y is actual parameter

    cout << "Sum of two numbers:" << s<<endl;

    return 0;
}

