#include<iostream>
using namespace std;

int main()
{  int n;
    cout<<"enter num ::";
    cin>>n;
    for(int i=4; i<=n; i=i+3) 
    {
        if(i%2==0){
     cout<<i<<endl;
        }
     if(i%2==1){
     cout<<-i<<endl;
     }
    }
      return 0;
}