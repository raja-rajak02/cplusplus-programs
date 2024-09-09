#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 5, 3, 2, 20};
    int i, sum = 0;
    /*int *ptr = arr;
    cout << " arr[1]:" << ptr[0] * 2 << endl;
    cout << " arr[2]:" << ptr[1] * 2 << endl;
    cout << " arr[3]:" << ptr[2] * 2 << endl;
    cout << " arr[4]:" << ptr[3] * 2 << endl;
    cout << " arr[5]:" << ptr[4] * 2 << endl;*/
    for (i = 0; i < 5; i++)
    {
        // cout << "arr[" << i << "] = " << arr[i] << "\n";
        sum += arr[i];
        // cout << "sum of array= " << sum << endl;
    }
    cout << "sum of array= " << sum << endl;

    return 0;
}