#include <iostream>
using namespace std;

int main()
{
   int account;
   double beginning;
   double charges;
   double credits;
   double limit;
   double balance;

   cout << "Enter account number (or -1 to quit): ";
   cin >> account;

   while ( account != -1 )
   {
      cout << "Enter beginning balance: ";
      cin >> beginning;
      cout << "Enter total charges: ";
      cin >> charges;
      cout << "Enter total credits: ";
      cin >> credits;

      cout << "Enter credit limit: ";
      cin >> limit;


      balance = beginning + charges - credits;
      cout << "New balance is " << balance;


        if(balance>limit)
    {
        cout <<"New balance is:"<< balance<<endl;
        cout <<"Account:"<<account<<endl;
        cout <<"Credit limit:" <<limit <<endl;
        cout <<"Balance:"<<balance<<endl;
        cout <<"Credit limit Exceeded.\n\nEnter amount number (or -1 to exit):";
        cin >>account;
    }

    else
        cout <<"New balance is"<<account + limit<<"\n\ Enter amount number (or -1 to exit):"<<endl;

        cin >>account;
}
    return 0;
}
