#include <iostream>
using namespace std;

int main()
{
   int product = 1;//product³É¼¨
   for ( int a= 3;a<= 15; a=a+2 )
      product=product*a;
   cout << "The product of all odd numbers in 1 to 15 is: "
      <<product<< endl;
   return 0;
}
