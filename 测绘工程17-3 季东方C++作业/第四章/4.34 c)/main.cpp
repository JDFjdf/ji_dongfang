#include <iostream>
using namespace std;

int main()
{
   int a= 1;
   int accuracy;
   int factorial = 1;
   int x;
   double e = 1.00;
   double exponent = 1.00;

   cout<<"Enter exponent: ";
   cin>>x;
   cout<<"Enter desired accuracy of e: ";
   cin>>accuracy;

   while (a<accuracy)
   {
      exponent=exponent*x;
      factorial=factorial*a;
      e=e+(exponent/factorial);
      a++;
   }

   cout << "e to the " << x << " is " << e << endl;

   return 0;
}
