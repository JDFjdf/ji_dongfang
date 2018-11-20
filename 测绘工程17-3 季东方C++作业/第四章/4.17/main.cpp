#include <iostream>
using namespace std;
int main()
{
    int max(int a,int b);
    int counter=0;
    int number1=0;
    int number2=0;
    cout<<"Enter an integer: ";
    cin>>number1;

    while(counter<9)
    {
        int c=0;
        cout<<"Enter another integer: ";
        cin>>number2;

        c=max(number1,number2);
        cout<<"Largest: "<<c<<endl;
        number1=c;

        counter++;
    }
    return 0;
}

int max( int a, int b)
{
    return (a>b? a:b) ;
}
