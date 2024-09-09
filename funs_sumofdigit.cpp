#include <iostream>
using namespace std;

int displaynumber(int num, int sum = 0)
{
    cout << "Enter digit: ";
    cin >> num;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num, sum = 0;
    sum = displaynumber(sum);
    cout << "Sum of digits: " << sum << endl;

    return 0;
}