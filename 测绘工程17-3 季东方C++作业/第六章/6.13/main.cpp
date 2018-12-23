#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double Seekinginteger( double );//求整数
int main()
{
   double a;
   double b;

   cout << fixed;

   for ( int loop = 1; loop <= 5; loop++ )
   {
      cout << "Enter a number: ";
      cin >> a;

      b = Seekinginteger( a);
      cout << setprecision( 6 ) << a<< " integer is "<< setprecision( 1 ) << b<< endl;
   }
}
double Seekinginteger( double value )//值

{
	return floor( value + .5 );
}
