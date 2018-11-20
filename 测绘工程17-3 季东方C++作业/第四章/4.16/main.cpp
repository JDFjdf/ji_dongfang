#include <iostream>

using namespace std;

int main()
{
    double hours=0,rate=0,salary1=0,salary2=0;
    cout<<"Enter hours worked (-1 to end):";
    cin>>hours;

    while(hours!=-1)
    {
        cout<<"Enter hourly rate of the employee ($00.00):";
        cin>>rate;

        salary1=hours*rate;
        salary2=40*rate+rate*1.5;
       if(hours>40)
       {
          cout<<"Salary is $"<<salary2<<endl;
          cout<<" "<<endl;
          cout<<"Enter hours worked (-1 to end):";
          cin>>hours;
       }

       else
        {
          cout<<"Salary is $"<<salary1<<endl;
          cout<<" "<<endl;
          cout<<"Enter hours worked (-1 to end):";
          cin>>hours;


        }
    }
    return 0;
}
