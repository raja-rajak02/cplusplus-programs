#include <iostream>
#include <string.h>
using namespace std;
class METROPOLIS
{
private:
    int MCode;
    string MName;
    long int MPop;
    float Area;
    float PopDens;
    void CalDen()
    {
        MPop = PopDens / Area;
    }

public:
    void Enter()
    {
        cout << "MCode:"; //<< MCode << endl;
        cin >> MCode;
        cout << "MName:"; // << MName << endl;
        cin >> MName;
        cout << "PopDens:"; // << PopDens << endl;
        cin >> PopDens;
        cout << "Area:"; //<<Area<<endl;
        cin >> Area;

        cout << endl;
        cout << "here are all details." << endl;
        CalDen();
    }
    void ViewAll()
    {

        cout << "MCode:" << MCode << endl;
        cout << "MName:" << MName << endl;
        cout << "PopDens:" << PopDens << endl;
        cout << "Area:" << Area << endl;
        cout << "MPop:" << MPop << endl;
    }
};
int main()
{

    METROPOLIS obj;
    obj.Enter();
    obj.ViewAll();

    return 0;
}