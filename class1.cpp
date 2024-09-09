#include <iostream>
using namespace std;
class box
{
private:
    int number;
    float side;
    float area;

    void Execarea()

    {
        area = side * side;
    }

public:
    void getbox()
    {
        cout << "enter box number:";
        cin >> number;
        cout << "enter box side value: ";
        cin >> side;

        Execarea();
    }

    void showbox()
    {
        cout << endl;
        cout << "box number : " << number << endl;
        cout << " side value :" << side << endl;
        cout << "value of area:" << area << endl;
    }
};
int main()
{

    box obj;
    obj.getbox();
    obj.showbox();

    return 0;
}
