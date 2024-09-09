#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 5, 3, 2, 20};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "even" << arr[i] << ":" << arr[i] * 2 << endl;
        }
        else
        {
            cout << "odd" << arr[i] << ":" << arr[i] + 10 << endl;
        }
    }
    return 0;
}