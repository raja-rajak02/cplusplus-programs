#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, odd = 0;
    cout << "enter num ::";
    cin >> n;
    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            sum = sum + i;
        }
        else
        {
            cout << i << endl;

            odd = odd + i;
        }
    }
    cout << "addition of sum number: " << sum << endl;
    cout << "addition of odd number: " << odd << endl;
    return 0;
}