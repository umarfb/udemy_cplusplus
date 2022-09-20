/* Section 8 Challenge

For this program use US dollars and cents

Write a program that asks the user to enter the following:
An integer representing the number of cents

Assume the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user

1 dollar = 100 cents
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent

Example:

Enter an amount in cents: 92
dollars: 0
quarters: 3
dimes: 1
nickels: 1
pennies: 2

*/

# include <iostream>

using namespace std;

int main(){
    
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};

    int user_amount;

    cout << "Enter an amount in cents: ";
    cin >> user_amount;
    cout << "You entered " << user_amount << " cents" << endl;

    int n_dollars;
    int n_quarters;
    int n_dimes;
    int n_nickles;
    int n_pennies;

    n_dollars = user_amount / dollar;
    user_amount %= dollar;

    n_quarters = user_amount / quarter;
    user_amount %= quarter;

    n_dimes = user_amount / dime;
    user_amount %= dime;

    n_nickles = user_amount / nickel;
    user_amount %= nickel;

    n_pennies = user_amount / penny;

    cout << "You can provide change as follows:" << endl;
    cout << "Dollars : " << n_dollars << endl;
    cout << "Quarters: " << n_quarters << endl;
    cout << "Dime    : " << n_dimes << endl;
    cout << "Nickel  : " << n_nickles << endl;
    cout << "Pennies : " << n_pennies << endl;

    return 0;
}