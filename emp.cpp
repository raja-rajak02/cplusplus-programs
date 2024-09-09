#include<iostream>
using namespace std;
int main()
{
int monthsal,annual,tax,netpay;
cout<<"enter a value of monthsal:- ";
cin>>monthsal;
annual=monthsal*12;
if(annual>=150000)
{
    tax=annual*15/100;
    cout<<"apply /15% tax "<<endl;
}
else
{
 tax=0;   
}
netpay=tax-annual;
cout<< "annual salary ::"<<annual<<endl;
cout<<"tax ::"<<tax<<endl;
cout<<"net amount recieve::"<<netpay<<endl;
return 0;

}