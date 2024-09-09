#include <iostream>
using namespace std;
void fun(int y)
{
    y = 30;
    cout << y;
}
int main()
{
    int x = 20;
    fun(x);
    cout << "x= " << x << endl;
    return 0;
}
