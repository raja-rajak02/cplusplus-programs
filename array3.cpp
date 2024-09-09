/* C++ One Dimensional Array */

#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    int sum = 0, avg = 0;
    cout << "Enter 5 array elements: ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "\nThe array elements are: \n";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "\n\nSum of all elements is: " << sum;
    avg = sum / 5;
    cout << "\nAnd average is: " << avg;

    return 0;
}