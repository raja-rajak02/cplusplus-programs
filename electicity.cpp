#include<iostream>
using namespace std;
int main()
{
     string name;
    int unit,bill,charge ;
    long double number;
    cout<<"name of person::";
    cin>>name;
    cout<<"person phone number:-";;
    cin>>number;
    cout<<"unit usage:-";
    cin>>unit;
if (unit<=100)
{
    bill=unit*40/100;
}
else if (unit>100 & unit==200)
{
    bill=unit*50/100;

}
else if (unit>200 & unit==300)
{
  bill=unit*60/100;
}else
{
    bill=unit*60/100;
}
 cout<<"electricity bill="<<bill<<endl;
 cout<<"motor charge RS.50"<<endl;
 charge=bill+50;
 cout<<"your electricity bill is :-"<<charge<<endl;

return 0;
}