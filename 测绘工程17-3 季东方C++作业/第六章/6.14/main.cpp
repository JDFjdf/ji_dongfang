#include <iostream>
#include <iomanip>
#include <cmath>//floor���������ڰ���ֵ���뵽�ض���С��λ��
using namespace std;

double roundToInteger( double ); // ���뵽����
double roundToTenths( double ); // ���뵽ʮ��λ
double roundToHundredths( double ); // ���뵽�ٷ�λ
double roundToThousandths( double ); // ���뵽ǧ��λ

int main()
{
   int count;
   double number;

   cout << "How many numbers do you want to process? " << fixed;
   cin >> count;

   for ( int i = 0; i < count; i++ )
   {
      cout << "\nEnter number: ";
      cin >> number;

      cout << setprecision( 6 ) << number << " rounded to the nearest integer is: "<< setprecision( 0 ) << roundToInteger( number ) << '\n';
      cout << setprecision( 6 ) << number << " rounded to the nearest tenth is: "<< setprecision( 1 ) << roundToTenths( number ) << '\n';
      cout << setprecision( 6 ) << number <<" rounded to the nearest hundredth is: "<< setprecision( 2 ) << roundToHundredths( number ) << '\n';
      cout << setprecision( 6 ) << number << " rounded to the nearest thousandth is: "<< setprecision( 3 ) << roundToThousandths( number ) << '\n';
   }
}

double roundToInteger( double a )
{
   return floor( a + .5 );
}

double roundToTenths( double a )
{
   return floor( a * 10 + .5 ) / 10;
}

double roundToHundredths( double a )
{
   return floor( a * 100 + .5 ) / 100;
}

double roundToThousandths( double a )
{
   return floor( a * 1000 + .5 ) / 1000;
}
