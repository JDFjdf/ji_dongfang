 #include <iostream>
using namespace std;

int main()
{
   int number;
   int factor; //����

   cout << "Dec\t\tBin\t\tOct\tHex\n";//Decimalʮ���Ƶģ�Binary�����Ƶģ�Octal�˽��Ƶģ�Hexadecimalʮ�����Ƶ�
   for ( int a = 1; a <= 256; a++ ) //loop��·
   {
      cout << dec << a << "\t\t";
      number = a;
      factor = 256;

      cout << ( number == 256 ? '1' : '0' );//==�ǵȺţ������ж�

      do
      {
         cout << ( number < factor && number >= ( factor / 2 ) ? '1' : '0' );//&& ��ʾ �� if�����ڵı��ʽ��Ϊ�� ��������if�ж������� �Ż�ִ��if{}������
         factor=factor/ 2;
         number=number%factor;
      } while ( factor > 1 );
      cout << '\t' << oct << a;
      cout << '\t' << hex << a << endl;
   }
    return 0;
}
