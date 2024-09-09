// Program to check whether an integer is positive, negative or zero
#include<iostream>
using namespace std;
int main()
{
int number ;
cout<<"Enter a value of number:" ;
cin>>number;
if (number>0)
{
cout<< "You entered a positive number:" <<number<<endl;
}
else if (number<0)
{
cout<< "You entered a negative number:"<<number<< endl;
}
else {
cout<< "You entered O." <<endl;
}
return 0;
}