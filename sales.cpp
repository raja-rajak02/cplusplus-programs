#include<iostream>
using namespace std;
int main()
{
int sale ,record;
cout<<"enter sales men sale price::";
cin>>sale;

if (sale>=30001)
{
    record=sale*15/100;
    cout<<"commission rate 15%"<<endl;
}
else if(sale>=22000 & sale<=30000)
{
    record=sale*10/100;
    cout<<"commission rate 10%"<<endl;
}
else if(sale>=12001 & sale<22000)
{
    record=sale*7/100;
    cout<<"commission rate 7%"<<endl;
}

    else if(sale>=5001 & sale<=12000)   
 { 
        record=sale*3/100;
        cout<<"commission rate 3%"<<endl;
 }
    else if(sale<=5000)
    {
        record=sale*0/100;
        cout<<"commission rate 0%"<<endl;
    }
    else
     {
    cout<<"no commission:"<<endl;
    }

    cout<<"commission::"<<record<<endl;
return 0;
}