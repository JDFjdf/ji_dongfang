#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    bool isRightTriangle = false;

    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

    if (a*a+b*b== c*c )
     {
         isRightTriangle = true;
     }
    else if (a*a+c*c==b*b )
      {
          isRightTriangle = true;
      }
    else if (b*b+c*c==a*a )
      {
          isRightTriangle = true;
      }

    if ( isRightTriangle )
      cout << "Can form a right triangle." << endl;
   else
      cout << "Can not form a right triangle." << endl;
    return 0;

}
