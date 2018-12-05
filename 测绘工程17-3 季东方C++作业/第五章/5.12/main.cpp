#include <iostream>//这道题我不太会，答案只看懂了一部分
using namespace std;

int main()
{
   int row; // the row position 行位
   int column; // the column position 柱位
   int space; // number of spaces to print 需要打印的空间数

   // first triangle
   for ( row = 1; row <= 10; row++ )//一共有十行，从小到大
   {
      for ( column = 1; column <= row; column++ )
         cout << "*";

      cout << endl;
   } // end for

   cout << endl;

   // second triangle
   for ( row = 10; row >= 1; row-- )
   {
      for ( column = 1; column <= row; column++ )
         cout << "*";

      cout << endl;
   } // end for

   cout << endl;

   // third triangle
   for ( row = 10; row >= 1; row-- )
   {
      for ( space = 10; space > row; space-- )
         cout << " ";

      for ( column = 1; column <= row; column++ )
         cout << "*";

      cout << endl;
   } // end for

   cout << endl;

   // fourth triangle
   for ( row = 10; row >= 1; row-- )
   {
      for ( space = 1; space < row; space++ )//????
         cout << " ";

      for ( column = 10; column >= row; column-- )
         cout << "*";

      cout << endl;
   } // end for
}
