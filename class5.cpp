#include <iostream>
using namespace std;
class applicant
{
private:
    long ANo;
    string Name;
    float Agg;
    char grade;
    void gradeMe()
    {
        if (Agg >= 80)
        {
            grade = 'A';
        }
        else if (Agg < 80 & Agg >= 65)
        {
            grade = 'B';
        }
        else if (Agg < 65 & Agg >= 50)
        {
            grade = 'C';
        }
        else if (Agg < 50)
        {
            grade = 'D';
        }
        else
        {
            cout << "not aggrigatable";
        }
    }

public:
    void ENTER()
    {
        cout << "Admission Number:";
        cin >> ANo;

        cout << "Name:";
        cin >> Name;

        cout << "Aggregate number:";
        cin >> Agg;

        gradeMe();
        cout << endl;
    }
    void RESULT()
    {
        cout << "HERE ARE ALL DETAIL." << endl;
        cout << "Admission Number:" << ANo << endl;
        cout << "Name:" << Name << endl;
        cout << "Aggregate Number:" << Agg << endl;
        cout << "Grade:" << grade << endl;
    }
};
int main()
{
    applicant obj;
    obj.ENTER();
    obj.RESULT();
    return 0;
}
