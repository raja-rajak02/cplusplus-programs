#include<iostream>
using namespace std;
int main ()
{
int n,num1=0,num2=1,sum=0;
int i=1;
cout<<"enter number :-";
cin>>n;
cout<<"fibonacci serise"<<endl;
while(i<=n)
{
    cout<<num1<<" ";
     sum=num1+num2;
     num1=num2;
     num2=sum;
     i=i+1;
}     
return 0;

}