#include <iostream>
using namespace std;

int main()
 {
    int n=10,mul=1;
        for (int i = 1; i <= n; i=i+1)
	{

        cout<<i<<endl;
		mul=mul*i;
    	}
        cout<<"mul of number 1 to 10 is ::"<<mul<<endl;
    
return 0;
  }