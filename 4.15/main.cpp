#include <iostream>
using namespace std;

int main()
{
    float money=0, salary=0;
    cout << "Enter sales in dollars(-1 to end):";
   cin >> money;
    while(money!=-1)
    {
    salary = money*0.09 + 200;
    cout << "Salary is:$" << salary <<endl;
    cout << "Enter sales in dollars(-1 to end):";
    cin >> money;
    }
    return 0;
}
