#include<iostream>
using namespace std;
int main()
{

int x,y,temp;
cout<<"enter a value of x:-";
cin>>x;
cout<<"enter a value y:-";
cin>>y;
temp=x;
x=y;
y=temp;
//cout<<"value of temp:-"<<temp<<endl;
cout<<"value of x:- "<<x<<endl;
cout<<"value of y:-"<<y<<endl;

return 0;



}