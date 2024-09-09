#include <iostream>
using namespace std;
class flight
{
private:
    int flightnumber;
    string destination;
    float distance;
    float fuel;
    void cal_fuel()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        if (distance > 1000 & distance <= 2000)
        {
            fuel = 1100;
        }
        if (distance > 2000)
        {
            fuel = 2200;
        }
        cout << endl;
    }

public:
    void feed_info()
    {
        cout << "flight number:";
        cin >> flightnumber;
        cout << "destination:";
        cin >> destination;
        cout << "distance in k.m.:";
        cin >> distance;
        cal_fuel();
    }
    void show_fuel()
    {
        cout << "flightnumber:" << flightnumber << endl;
        cout << "destination:" << destination << endl;
        cout << "distance:" << distance << endl;
        cout << "fuel:" << fuel << endl;
    }
};
int main()
{
    flight obj;
    obj.feed_info();
    obj.show_fuel();
    return 0;
}