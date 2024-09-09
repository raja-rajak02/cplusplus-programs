
// Write the output of the following program :
#include <iostream>
using namespace std;
class Counter
{
private:
public:
    unsigned int count;
    Counter() { count = 0; }
    void inc_Count() { count++; }
    int get_Count() { return count; }
};
int main()
{
    Counter C1, C2;
    cout << "  C1 =" << C1.get_Count();
    cout << "  C2 =" << C2.get_Count();
    C1.inc_Count();
    C2.inc_Count();
    // C2.inc_Count();
    cout << " C1=" << C1.get_Count();
    cout << " C2=" << C2.get_Count() << endl;
    return 0;
}