#include <iostream>
using namespace std;

// CHANGED:Function to count the number of digits
int countDigits(int num)
{
   int count = 0;
   while (num != 0)
   {
      num /= 10;
      count++;
   }
   return count;
}

// TODO: Function to check Armstrong number
int isArmstrong(int num)
{
   int temp = num, sum = 0, digits = countDigits(num), r;

   while (temp != 0)
   {
      r = temp % 10;
      sum += (r * r * r);
      temp /= 10;
   }

   return sum;
}

int main()
{
   int num, sum;

   cout << "Enter a number: ";
   cin >> num;
   
   // CHANGED:Call the function to count the number of digits

   int digitCount = countDigits(num);
   cout << "Number of digits: " << digitCount << endl;

   // TODO: Call the function and check if it's an Armstrong number

   sum = isArmstrong(num);
   cout << "value of sum:" << sum << endl;

   if (sum == num)
   {
      cout << num << " is an Armstrong number." << endl;
   }
   else
   {
      cout << num << " is not an Armstrong number." << endl;
   }

   

      return 0;
}
