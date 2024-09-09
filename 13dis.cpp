#include<iostream>
using namespace std;
int main()
{
int pur,dis,netpay; 
cout<<"enter a value of pur:-";
cin>>pur;
if(pur<=13000)
{
    dis=pur*2/100;
    cout<<"got 2% discount"<<endl;
}
 else
{
 dis=0;
}
netpay=pur-dis;
    cout<<"value of dis:- "<<dis<<endl;
cout<<"value of netpay:-"<<netpay<<endl;
 
return 0;

}