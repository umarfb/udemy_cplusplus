// Section 6 Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carper cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
=================================
Total estimates
This estimate is valid for 30 days
*/

# include <iostream>

using namespace std;

int main(){

    int small_rooms;
    int large_rooms;

    const int small_room_price {25};
    const int large_room_price {35};
    const float sales_tax_rate {0.06};

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> small_rooms;
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;

    int cleaning_cost;
    cleaning_cost = (small_rooms * small_room_price) + (large_rooms * large_room_price);

    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;
    cout << "Cost: $" << cleaning_cost << endl;

    float sales_tax;
    sales_tax = (sales_tax_rate * cleaning_cost);

    cout << "Tax: $" << sales_tax << endl;
    cout << "==================================" << endl;
    cout << "Total estimate: $" << cleaning_cost + sales_tax << endl;
    cout << "This estimate is valid for 30 days";

    return 0;
}