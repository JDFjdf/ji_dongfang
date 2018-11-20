#include <iostream>
using namespace std;

int main()
{
   int n = 0;
   cout<<"N"<<"\t"<<"10*N"<<"\t"<<"100*N"<<"\t"<<"1000*N";

   while( n++ <= 5 )
   {
    cout<<endl;
    cout << n << "\t"<< 10 * n << "\t" << 100 * n<< "\t" << 1000 * n << "\t"<<endl;
   }
    return 0;
}

