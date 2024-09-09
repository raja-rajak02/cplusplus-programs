#include<iostream>
using namespace std;
int main ()
{
    int month;
    cout<<"1.january"<<endl;
    cout<<"2.february"<<endl;
    cout<<"3.march"<<endl;
    cout<<"4.april;"<<endl;
    cout<<"5.may"<<endl;
    cout<<"6.june"<<endl;
    cout<<"7.july"<<endl;
    cout<<"8.augast"<<endl;
    cout<<"9.september"<<endl;
    cout<<"10.october"<<endl;
    cout<<"11.november"<<endl;
    cout<<"12.december"<<endl;

    cout<<"enter a month 1 to 12:-";
    cin>>month;

if (month>12)
    {
        cout<<"enter month between 1 to 12"<<endl;
        cout<<"enter month:-";
        cin>>month;
    }
    
     switch (month)
     {
case 1:
     cout<<"january"<<endl;
    cout<<"31 days in this month"<<endl;
    break;
 case 2:
     cout<<"february"<<endl;
    cout<<"28 days in this month"<<endl;
     break;
case 3:
     cout<<"march"<<endl;
    cout<<"31 days in this month"<<endl;
     break;
 case 4:
     cout<<"april"<<endl;
    cout<<"30 days in this month"<<endl;
     break;
 case 5:
     cout<<"may"<<endl;
    cout<<"31 days in this month"<<endl;
     break;
 case 6:
     cout<<"june"<<endl;
    cout<<"30 days in this month"<<endl;
     break;
 case 7:
     cout<<"july"<<endl;
    cout<<"31 days in this month"<<endl;
     break;
 case 8:
     cout<<"august"<<endl;
    cout<<"31 days in this month"<<endl;
     break;
 case 9:
     cout<<"september"<<endl;
    cout<<"30 days in this month"<<endl;
     break;
 case 10 :
     cout<<"october"<<endl;
    cout<<"31 days in this month"<<endl;
     break;
 case 11:
     cout<<"november"<<endl;
    cout<<"30 days in this month"<<endl;
     break;
 case 12:
     cout<<"december"<<endl;
    cout<<"31 days in this month"<<endl;
   break;
 default:
  cout<<"invalid input"<<endl;
   break;
}
 return 0;
}