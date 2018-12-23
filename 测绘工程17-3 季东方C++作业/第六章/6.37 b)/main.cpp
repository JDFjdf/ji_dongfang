#include <iostream>
#include <iomanip>
using namespace std;

double fibonacci( int );

int main()
{
   cout << fixed << setprecision( 1 );

   for ( int counter = 0; counter <= 10; counter++ )
      cout << "fibonacci( " << counter << " ) = "
         << fibonacci( counter ) << endl;

   cout << "fibonacci( 20 ) = " << fibonacci( 20 ) << endl;
   cout << "fibonacci( 30 ) = " << fibonacci( 30 ) << endl;
   cout << "fibonacci( 35 ) = " << fibonacci( 35 ) << endl;
}
double fibonacci( int n )
{
   double fib0 = 0;

   double fib1 = 1;
   double temp;

   if ( n == 0 )
      return 0;

   for ( int i = 2; i <= n; i++ )
   {

      temp = fib1;
      fib1 = fib0 + fib1;
      fib0 = temp;
   }
   return fib1;
}
