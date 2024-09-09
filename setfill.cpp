#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  cout << "The number printed with width 10"<<endl;
  cout << setw(11);
  cout << 77 << endl;
  cout << "The number printed with width 2"<<endl;
  cout << setw(120);
  cout << 10 << endl;
  cout << "The number printed with width 5"<<endl;
  cout << setw(5);
  cout << 25 << endl;


  cout << setfill ('*') << setw (10);
  cout << 15 << endl;
  cout << setfill ('#') << setw (5);
  cout << 5 << endl;
  cout << setfill ('#') << setw (8);
  cout << 1 << endl;
  cout << setfill ('*') << setw (10);
  cout << 25 << endl;
return 0; 
}