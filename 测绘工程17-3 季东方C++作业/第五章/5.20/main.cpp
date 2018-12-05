#include <iostream>
using namespace std;

int main()
{
    int sideA;
    int sideB;
    int hypC;
    int count=0;

    cout<<"side 1\tside 2\thypotenuse" << endl;

    for ( long side1 = 1; side1 <= 500; side1++ )
   {
       for ( long side2 = side1; side2 <= 500; side2++ )
      {
         for ( long hypotenuse = side2; hypotenuse <= 500; hypotenuse++ )
         {
             sideA = side1*side1;
             sideB = side2*side2;
             hypC= hypotenuse*hypotenuse;

             if(hypC == sideA+sideB)
              {
                 cout << side1 << '\t' << side2 << '\t'<< hypotenuse << '\n';
                 count++;
              }
         }
      }
   }
   cout << "A total of " << count << " triples were found." << endl;
   return 0;
}
