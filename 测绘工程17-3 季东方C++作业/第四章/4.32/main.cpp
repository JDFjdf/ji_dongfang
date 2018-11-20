#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    bool isTriangle = false;

    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

   if ( a+b>c )
   {
      if ( b+c>a )
      {
         if (c+a>b )
            {
                isTriangle = true;
            }
      }
   }
   if ( isTriangle )
      {
          cout << "Can form a triangle." << endl;
      }
   else
      {
          cout << "Can not form a triangle." << endl;
      }
      return 0;
}
