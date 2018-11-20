#include<iostream>

using namespace std;
int main()
{
    double accountnumber=0,beginningbalance=0,totalcharges=0,totalcredits=0,creditlimit=0,newbalance=0;
    cout<<"Enter account number (or -1 to quit):";
    cin>>accountnumber;

    while(accountnumber!=-1)
    {
        cout<<"Enter beginning balance:";
        cin>>beginningbalance;
        cout<<"Enter total charges:";
        cin>>totalcharges;
        cout<<"Enter total credits:";
        cin>>totalcredits;
        cout<<"Enter credit limit:";
        cin>>creditlimit;

        newbalance=beginningbalance+totalcharges-totalcredits;
      if (newbalance>creditlimit)
       {
        cout<<"New balance is "<<newbalance<<endl;
        cout<<"Account:"<<accountnumber<<endl;
        cout<<"Credit Limit:"<<creditlimit<<endl;
        cout<<"Balance:"<<beginningbalance<<endl;
        cout<<"Credit Limit Exceeded."<<endl;
        cout<<" "<<endl;

       }

      else
        {
        cout<<"New balance is "<<newbalance<<endl;
        cout<<" "<<endl;
        cout<<"Enter account number (or -1 to quit):";
        cin>>accountnumber;
        }
    }
    return 0;
}
