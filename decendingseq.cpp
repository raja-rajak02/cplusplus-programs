
#include <iostream>
using namespace std;
int main()
{
float a, b, c, big, big2, big3 ;
cout << " Enter three numbers  \n";
cin>>a>>b>>c;
big = a ;
//finding the biggest number
if(b > big)
big= b;
if(c > big)
big = c;
if(a == big)
{ if(b > c)
{
big2=b;
big3=c;
}
else
{
big2 = c;
big3 = b;
}
}
else if(b == big)
{ if(a> c)
{
big2= a;
big3 = c;
}
else
{
big2 = c;
big3 = a;
}
}
else if(c == big)
{ if(a > b)
{
big2 = a;
big3 = b;
}
else
{
big2 = b;
big3= a;
}
}
 // for desending of number                   // for asending of number
                               // cout<<"a="<<big3<<endl;
                             //cout<<"b="<<big2<<endl;  
                            //cout<<"c="<<big3<<endl;
cout<<"a="<<big<<endl;
cout<<"b="<<big2<<endl;
cout<<"c="<<big3<<endl;
return 0;
}
