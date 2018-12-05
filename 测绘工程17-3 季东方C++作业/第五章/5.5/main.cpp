#include <iostream>
using namespace std;

int main()
{
   int total= 0;
   int number;
   int integer;

   cout << "Enter the number of integer to be summed " << "followed by the integer: \n";
   cin >> number;

   for (int a= 1; a<= number; a++)
   {
      cin >> integer;
      total =total+integer;
   }
   cout << "Sum of the " << number << " integer is " << total<< endl;
   return 0;
}
