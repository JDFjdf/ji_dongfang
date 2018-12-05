#include <iostream>
using namespace std;

int main()
{
   int number;
   int integer;
   int smallest;

   cout << "Enter the number of integers to be processed ";
   cout << "followed by the integers: " << endl;
   cin >> number >> smallest;

   for ( int a= 2;a<= number;a++ )
   {
      cin >>integer;

      if ( integer< smallest )
         smallest =integer;
   }
   cout << "\nThe smallest integer is: " << smallest << endl;
   return 0;
}
