#include <iostream>//我也不知道为什么从706开始的
#include <iomanip>
using namespace std;

int main()
{
   double pi = 0.0;
   double denom = 1.0;//分母
   int number = 1000;

   cout << fixed << setprecision( 6 );
   cout << "Calculate the approximate value of this term: " << number << "\t\tpi\n";

   for ( int a = 1; a<= number; a++ )
   {
      if ( a%2 != 0 ) //'%'为取余运算符，用于把它前面的整数值或表达式除以其后面的整数值或表达式，结果为不能被后面的整数或表达式整除的最小整数，它后面的数值应该为大于1的正整数
         pi=pi+4.0/ denom;
      else
         pi=pi-4.0/ denom;

   cout <<a<< "\t\t" << pi << '\n';

      denom=denom+2.0;
   }
   cout << endl;
   return 0;
}
