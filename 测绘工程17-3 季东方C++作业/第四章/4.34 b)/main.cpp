#include <iostream>
using namespace std;

int main()
{
   int a=1;
   int accuracy;
   int factorial=1;
   double e=1.00;

   cout<<"Enter the accuracy of e:";
   cin>>accuracy;

   while(a<accuracy)
   {
      factorial= factorial*a;
      e=e+(1.00/factorial);
      a++;
   }
   cout <<"e = "<<e<<endl;
   return 0;
}
