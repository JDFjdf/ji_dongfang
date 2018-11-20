#include<iostream>
using namespace std;
int main()
{
  int binaryNumber=0, transitionNumber=0, decimalNumber=0, scale=0;
  cout<<"Enter a binary number:";
  cin>>binaryNumber;

  transitionNumber=binaryNumber;
  decimalNumber=0;
  scale=1;

  while ( transitionNumber )
  {
  decimalNumber+=scale*transitionNumber%10;
  scale*=2;
  transitionNumber/=10;
  }
   cout<<binaryNumber<<"'s decimal value is:"<<decimalNumber<<endl;
  return 0;
}
