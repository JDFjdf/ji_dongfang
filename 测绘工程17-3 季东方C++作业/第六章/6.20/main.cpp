#include <iostream>
using namespace std;//这道题我不太会

bool multiple( int, int ); //倍数

int main()
{
   int x;
   int y;

   for ( int i = 1; i <= 3; i++ )
   {
      cout << "Enter two integers: ";
      cin >> x >> y;

      if ( multiple( x, y ) )
         cout << y << " is a multiple of " << x << "\n\n";
      else
         cout << y << " is not a multiple of " << x << "\n\n";
   }

   cout << endl;
}

bool multiple( int a, int b )
{
   return !( b % a );
}
