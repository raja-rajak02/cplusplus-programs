// program to add two numbers using a function
#include <iostream>
using namespace std;
// declaring a function
int add(int a, int b, int c, int d, int e)
{
    cout << "enter hindi marks =";
    cin >> a;
    cout << "enter english marks =";
    cin >> b;
    cout << "enter chemistry marks =";
    cin >> c;
    cout << "enter physics marks  =";
    cin >> d;
    cout << " enter maths mark   =";
    cin >> e;

    return (a + b + c + d + e);
}
// FIXME: FUNCTION

int displaypercent(int sum)
{
    return (sum / 5);
}

int main()
{

    int sum, a, b, c, d, e, per;
    // calling the function and storing
    // the returned value in sum
    sum = add(a, b, c, d, e);

    // TODO: PER FUNCTION
    per = displaypercent(sum);

    cout << "total=" << sum << endl;
    cout << "percent=" << per << "%" << endl;
    return 0;
}