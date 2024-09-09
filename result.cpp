#include<iostream>
using namespace std;
int main()
{
    int total_marks,maths,hindi,english,physics,chemistry;

    cout<<"total marks is 100"<<endl;
    cout<<"marks in maths::";
    cin>>maths;
    cout<<"marks in hindi::";
    cin>>hindi;
    cout<<"marks in english::";
    cin>>english;
    cout<<"marks in physics::";
    cin>>physics;
    cout<<"marks in chemistry::";
    cin>>chemistry;

    total_marks=maths+hindi+english+physics+chemistry;
    cout<<"total marks::"<<total_marks<<endl;

    if(total_marks<=50)
    {
        cout<<"GRADE F "<<endl;
    }
   else if (total_marks>=50 & total_marks<60)
   {
    cout<<" GRADE D "<<endl;
   }
   else if(total_marks>=60 & total_marks<70)
   {
    cout<<"GRADE C "<<endl;
   }
   else if (total_marks>=70 & total_marks<80)
   {
    cout<<"GRADE B "<<endl;
   }
   else if(total_marks>=80 & total_marks<90)
   {
    cout<<"GRADE A "<<endl;
   }
   else if (total_marks>=90)
   {
    cout<<"GRADE A+"<<endl;
   }
else
{
    cout<<"invalid marks"<<endl;
}
return 0;

}