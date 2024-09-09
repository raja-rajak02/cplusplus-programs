#include<iostream>
using namespace std;
int main()
{
int pur,dis,netpay; 
cout<<"enter a value of pur:-";
cin>>pur;
if(pur>=15000)
{
    dis=pur*10/100;
    cout<<"got 10% discount"<<endl;

    //netpay=pur-disc;
    //cout<<"value of disc:- "<<disc<<endl;
//cout<<"value of netpay:-"<<netpay<<endl;
//cout<<"got 10% discount"<<endl;
}
 else
{
 dis =0;
 //cout<<"pur:-"<<pur<<endl;
 //cout<<"no discount"<<endl;

}
netpay=pur-dis;
    cout<<"value of dis:- "<<dis<<endl;
cout<<"value of netpay:-"<<netpay<<endl;
// cout<<"no discount"<<endl;
 




return 0;
}