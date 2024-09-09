#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t ttime = time(0);
    cout << "Number of seconds elapsed since January 1, 1990:" << ttime << endl;
    tm *local_time = localtime(&ttime);

    cout << "Year: " << 1900 + local_time->tm_year << endl;

    cout << "Month: " << 1 + local_time->tm_mon << endl;

    cout << "Day: " << local_time->tm_mday << endl;

    cout << "Time: " << 1 + local_time->tm_hour << ":";

    cout << 1 + local_time->tm_min << ":";

    cout << 1 + local_time->tm_sec << endl;
}