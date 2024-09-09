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
       sum=(sum*10)+r;
       num=num/10;
    }
cout<<"value of sum:-"<<sum<<endl;
    if(temp==sum) 
     {
        cout << sum << " this is Palindome number." << endl;
    } 
    else  
    {
        cout << sum << " this is not Palindome number." << endl;
    }
    return 0;
}
