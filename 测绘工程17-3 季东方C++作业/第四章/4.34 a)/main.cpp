#include <iostream>
using namespace std;

int main()
{
   int a;
   int factorial = 1;

   cout<<"Enter a positive Integer: ";
   cin>>a;

   cout<<a<< "! = ";

   while(a>0)
   {
      factorial=factorial*a;
      a--;
   }
   cout<<factorial<<endl;

   return 0;
}
