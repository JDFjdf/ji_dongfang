#include <iostream>//��Ҳ��֪��Ϊʲô��706��ʼ��
#include <iomanip>
using namespace std;

int main()
{
   double pi = 0.0;
   double denom = 1.0;//��ĸ
   int number = 1000;

   cout << fixed << setprecision( 6 );
   cout << "Calculate the approximate value of this term: " << number << "\t\tpi\n";

   for ( int a = 1; a<= number; a++ )
   {
      if ( a%2 != 0 ) //'%'Ϊȡ������������ڰ���ǰ�������ֵ����ʽ��������������ֵ����ʽ�����Ϊ���ܱ��������������ʽ��������С���������������ֵӦ��Ϊ����1��������
         pi=pi+4.0/ denom;
      else
         pi=pi-4.0/ denom;

   cout <<a<< "\t\t" << pi << '\n';

      denom=denom+2.0;
   }
   cout << endl;
   return 0;
}
