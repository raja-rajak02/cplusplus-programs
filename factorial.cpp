#include <iostream>
using namespace std;

int main()
 {
    int number;
    long factorial=1;

    cout<<"enter number: ";
    cin>>number;
        for (int i = 1; i <= number; i=i+1)
	{

		factorial=factorial*i;
    	}
        cout<<"factorial of number "<<number<<" is :"<<factorial<<endl;
    
return 0;
  }