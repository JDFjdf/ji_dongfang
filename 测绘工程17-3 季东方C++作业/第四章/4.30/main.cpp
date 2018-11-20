#include <iostream>
using namespace std;

int main()
{
  double R=0;
  double pi=3.14159;
  cout<<"Enter Circle's R:";
  cin>>R;

  while(R>=0)
  {
    cout<<"Circle's D:"<<2*R<<endl;
    cout<<"Circle's C:"<<2*pi*R<<endl;
    cout<<"Circle's S:"<<pi*R*R<<endl;
    cout<<""<<endl;
    cout<<"Enter Circle's R:";
    cin>>R;
  }

  return 0;
}
