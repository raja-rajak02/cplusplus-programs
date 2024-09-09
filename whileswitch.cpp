
#include <iostream>
using namespace std;

int main( )
{ 
    int i = 0, ua = 0, ub = 0, uc = 0, fail = 0 ;

while (i <= 5)
{
switch (i++)
{
case 1 :
    break;
case 2:
    ++ua;
    break;
case 3:
   break;
case 4:   
      ++ub;
      break ;
case 5: 
++uc;
     break;
default : 
     ++fail ;
}
}

cout<<"ua="<<ua<<"    "<<"ub="<<ub<<endl;
cout<<"uc="<<uc<<"\t"<<"fail="<<fail<<endl;

return 0;
}