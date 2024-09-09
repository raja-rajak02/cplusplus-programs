#include<iostream>
using namespace std;
int main ()
{
    int value;

cout<<"enter value between 0-999::";
cin>>value;

if (value<=9)
{
    cout<<"here is 1 integer number"<<endl;
}
else if (value>=10 & value<99)
{
    cout<<"here is 2 integer number"<<endl;
}
else if (value>=100 & value<999)
{
    cout<<"here is 3 integer number"<<endl;
}
else 
{
    cout<<"invalid input";
}
return 0;
}
