 #include <iostream>
using namespace std;

int main()
{
   int number;
   int factor; //因子

   cout << "Dec\t\tBin\t\tOct\tHex\n";//Decimal十进制的；Binary二进制的；Octal八进制的；Hexadecimal十六进制的
   for ( int a = 1; a <= 256; a++ ) //loop回路
   {
      cout << dec << a << "\t\t";
      number = a;
      factor = 256;

      cout << ( number == 256 ? '1' : '0' );//==是等号，用于判断

      do
      {
         cout << ( number < factor && number >= ( factor / 2 ) ? '1' : '0' );//&& 表示 且 if括号内的表达式都为真 才能满足if判定的条件 才会执行if{}里的语句
         factor=factor/ 2;
         number=number%factor;
      } while ( factor > 1 );
      cout << '\t' << oct << a;
      cout << '\t' << hex << a << endl;
   }
    return 0;
}
