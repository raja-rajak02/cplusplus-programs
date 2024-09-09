#include <iostream>
using namespace std;
int main()
{
    int num,temp=num,sum = 0,r;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (num!= 0)
     {
        r=num%10;
       sum=sum+(r*r*r);
       num=num/10;
    }
cout<<"value of sum:-"<<sum<<endl;
    if(temp==sum) 
     {
        cout << sum << " is an Armstrong number." << endl;
    } 
    else  
    {
        cout << sum << " is not an Armstrong number." << endl;
    }

    return 0;
}
