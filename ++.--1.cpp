// CPP program to demonstrate post increment
// operator
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    int x = 10, a;

    a = x++;

    cout << "Post Increment Operation";

    // Value of a will not change
    cout << "\na = " << a;

    // Value of x change after execution of a=x++;
    cout << "\nx = " << x;

    return 0;
}
