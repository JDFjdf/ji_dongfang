#include <iostream>//������Ҳ�̫�ᣬ��ֻ������һ����
using namespace std;

int main()
{
   int row; // the row position ��λ
   int column; // the column position ��λ
   int space; // number of spaces to print ��Ҫ��ӡ�Ŀռ���

   // first triangle
   for ( row = 1; row <= 10; row++ )//һ����ʮ�У���С����
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
