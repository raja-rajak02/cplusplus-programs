#include<iostream>
using namespace std;
int main()
{
int choice ;
cout << "Enter your choice 1 to 7::";
cin >>choice;
if (choice==1)
{
cout << "sunday"<<endl;
}
else if (choice==2)
{
cout<< "monday"<<endl;
}
else if (choice==3)
{
    cout<<"tuesday"<<endl;
}
else if(choice==4)
{
cout << "wednasday"<< endl;
}
else if(choice==5)
{
cout << "thursday"<< endl;
}
else if(choice==6)
{
cout << "friday"<<endl;
}
else if(choice==7)
{
cout << "satarday"<< endl;
}
else
{
    cout<<"number is invalid"<<endl;
}
return 0;
}