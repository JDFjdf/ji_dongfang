#include <iostream>
using namespace std;

int main()
{
   int factorial = 1; //factorial�׳�

   cout << "x\tx!\n";

   for ( int a= 1; a<= 5; a++ )
   {
      factorial=factorial*a;

      cout <<a<<'\t'<< factorial <<'\n';
   }
   cout << endl;
   return 0;
}
