#include <iostream>
#include <iomanip>//精度
#include <cmath>//数学运算
using namespace std;

double calculateCharges( double ); //此运算以及运算过程的量皆为double

int main()
{
   double hour;
   double currentCharge; //目前的费用
   double totalCharges = 0.0; //总费用
   double totalHours = 0.0; //总时长
   bool first = true;

   cout << fixed; //精度
   cout << "Enter the hours parked for 3 cars: ";

   for ( int i = 1; i <= 3; i++ )
   {
      cin >> hour;
      totalHours += hour;

      if ( first )
      {
         cout << setw( 5 ) << "Car" << setw( 15 ) << "Hours"<< setw( 15 ) << "Charge\n";
         first = false; //??
      }

      currentCharge = calculateCharges( hour );
      totalCharges += currentCharge;

      cout << setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour<< setw( 14 ) << setprecision( 2 ) << currentCharge << "\n";
   }

   cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )<< totalHours << setw( 14 ) << setprecision( 2 )<< totalCharges << endl;
 return 0;
}

double calculateCharges( double hours )
{
   double charge;

   if ( hours < 3.0 )
      charge = 2.0;
   else
      charge = 2.0 + .5 * ceil( hours - 3.0 );

   return ( charge > 10.0 ? 10.0 : charge );
}
