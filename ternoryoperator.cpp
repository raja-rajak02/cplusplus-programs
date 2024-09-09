#include <iostream>
#include <string>
using namespace std;
//using namespace std;

int main() {
  double marks;
char Result[15];
  // take input from users
  cout<< "Enter your marks: ";
  cin>> marks;

  // ternary operator checks if
  // marks is greater than 40
 (marks >= 40) ? cout<<"Pass" : cout<<"Fail";

//  cout << "You " << Result << " the exam.";

  return 0;
}