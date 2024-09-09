#include<iostream>
using namespace std;
int main()
{
    start:
int a, b, c, i;
for(i=0; i<20; i++)
{
   cout << "\n Enter 2 numbers" ;
   cin >> a >> b ;
   if(b == 0)
   {
cout << "\n The denominator cannot be zero" << "Enter again !";
continue; }
else
c = a/b ;
   cout << "\n Quotient =" << c << "\n" ;
}
return 0;
}
