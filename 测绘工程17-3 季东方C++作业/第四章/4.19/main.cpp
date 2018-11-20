#include <iostream>
using namespace std;

int main()
{
   int counter = 0;
   int number1=0,number2=0,number3=0;

   cout << "Enter the first number: ";
   cin >> number1;

   while(counter<9)
    {
     cout << "Enter the second number: ";
     cin >> number2;
     cout<<"Enter the third number: ";
     cin>>number3;

     int a=0;
     int b=0;
     a=number3>max(number1,number2)?number3:max(number1,number2);
     b=number3<min(number1,number2)?min(number1,number2):min(number3,max(number1,number2));
     cout << "Largest is:" <<a<<endl;
     cout<< "Second largest is:" <<b<< endl;
     number1=a;
     number2=b;

     counter++;
    }
    return 0;
}
