#include <iostream>

using namespace std;

int main()
{
   double sales=0,salary=0;
   cout<<"Enter sales in dollars (-1 to end):";
   cin>>sales;

   while(sales!=0)
   {
       salary=200+sales*0.09;
       {
           cout<<"Salary is: $"<<salary<<endl;
           cout<<" "<<endl;
           cout<<"Enter sales in dollars (-1 to end):";
           cin>>sales;
       }
   }
   return 0;
}
