#include<iostream>
using namespace std;
int main ()
{
int n1,n2,n3,n4,n5;
cout<<"enter number";
cin>>n1;
 
n2=n1%100;
n3=n1/100;
n4=n3%100;
n5=n3/100;

cout<<"n2 value:"<<n2<<endl;
cout<<"n4 value:"<<n4<<endl;
cout<<"n5 value:"<<n5<<endl;

return 0;
}
