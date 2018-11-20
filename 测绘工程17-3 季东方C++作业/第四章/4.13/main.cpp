#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double milesdriven=0, gallonsused=0, gallonsused2=0, milesdriven2=0,MPG1=0, MPG2=0;
   cout<<"Enter miles driven (-1 to quit):";
   cin>>milesdriven;

   while(milesdriven!=-1)
   {
    cout<<"Enter gallon used:";
    cin>>gallonsused;

    gallonsused2=gallonsused2+gallonsused;
    milesdriven2=milesdriven2+milesdriven;
    MPG2=milesdriven2/gallonsused2;
    MPG1=milesdriven/gallonsused;

    {
    cout<< setprecision( 6 )<<fixed;
    cout<<"MPG this trip:"<<MPG1<<endl;
    cout<<"Total MPG:"<<MPG2<<endl;
    cout<<""<<endl;
    cout<<"Enter miles driven (-1 to quit):"<<endl;
    cin>>milesdriven;
    }

   }
   return 0;
}
