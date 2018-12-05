#include <iostream>
using namespace std;

int main()
{
   int integer;
   int count = 0;
   int total = 0;

   cout << "Enter integers (9999 to end):" << endl;
   cin >> integer;

   while ( integer != 9999 )
   {
      total=total+integer;
      count++;
      cin >> integer;
   }

  if ( count != 0 )
      cout << "\nThe average is: "<< static_cast< double > ( total ) / count << endl;//static_castÇ¿ÖÆ×ª»»
  else
      cout << "\nNo values were entered." << endl;
      return 0;
}
