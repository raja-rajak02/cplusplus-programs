// Program to check whether an integer is positive, negative or zero
#include <iostream>
using namespace std;
int main()
{
int  num1,num2;
cout<< "value of num1::";
cin>>num1;
cout<<"value of num2::";
cin>>num2;
if (num1>num2)
{
cout << "number 1 is greater"<<endl;
}
else if (num2>num1)
{
cout<<"number 2 is greater "<<endl;
}
else {
cout << "both number is equal " <<endl;
}
return 0;
}