#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 70, 89,
                 0, 12, 35, 99, 14};
    cout << "Number of elements: "
         << (sizeof(arr) / sizeof(arr[0]));
    cout << endl;
    return 0;
}
