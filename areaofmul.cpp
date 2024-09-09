#include<iostream>
using namespace std;
int main()
{
    int choice ,circle,square,triangle,rectangle;
    int  value,a,base,hight,length,width;
cout<<"1.area of circle"<<endl;
cout<<"2.area of square"<<endl;
cout<<"3.area of triangle"<<endl;
cout<<"4.area of rectangle"<<endl;

cout<<"enter your choice :-";
cin>>choice;

switch (choice)
{
    case 1:
    cout<<"enter value::";
    cin>>value;
    circle=22/7*value*value;
    cout<<"area of circle::"<<circle<<endl;
    break;

    case 2:
    cout<<"enter a::";
    cin>>a;
    square=a*a;
    cout<<" area of square::"<<square<<endl;
    break;

    case 3:
    cout<<"enter base::";
    cin>>base;
    cout<<"enter hight::";
    cin>>hight;
     triangle=base*hight/2;
     cout<< " area of triangle::"<<triangle<<endl;
     break;

     case 4:
     cout<<"enter length::";
    cin>>length;
    cout<<"enter width::";
    cin>>width;
    rectangle=length*width;
    cout<< " area of rectangle::"<<rectangle<<endl;
    break;
    default :
    cout<<"exit"<<endl;
    break;
}
 

return 0;
}