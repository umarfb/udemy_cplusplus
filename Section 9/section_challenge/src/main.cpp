/* Section 9 Challenge

Use a collection of integers and allow the user to select options from
a menu to perform operations on the list

Your program should display a menu options to the user as follows:

P - Print numbers
A - Add a number
M - Display the mean of numbers
S - Display smallest number
L - Display largest number
Q - Quit

Enter your choice:

If an illegal choice is made, you should display "Unknown selection, please try again"
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space

If the user enters 'A'/'a', prompt the user for an integer to add to the list
and then display is was added

If the list is empty and user enters 'M'/'m', display
"Unable to calculate mean - no data"

Same as above for 'S'/'s', 'L'/'l'

If the user enters 'Q'/'q' then display "Goodbye" and terminate the problem

*/

# include <iostream>
# include <vector>

using namespace std;

int main(){
    
    char selection{};
    vector <int> collection (0);

    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display the mean of numbers" << endl;
        cout << "S - Display the smallest numbers" << endl;
        cout << "L - Display the largest numbers" << endl;
        cout << "Q - Quit" << endl;
        cout << "---------------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p') {
            if (collection.size() == 0) {
                cout << "[]" << endl;
            }
            else {
                cout << "[";
                for (int i{0}; i < collection.size(); ++i) {
                    cout << " " << collection[i];
                }
                cout << " ]" << endl;
            }
        }

        else if (selection == 'A' || selection == 'a') {

            int new_int{0};

            cout << "Enter an integer to add to the list: ";
            cin >> new_int;
            collection.push_back(new_int);
            cout << new_int << " was added" << endl;
        }

        else if (selection == 'M' || selection == 'm') {

            double mean{0};

            for (int i{0}; i < collection.size(); ++i) {
                mean += collection[i];
            }
            mean /= collection.size();
            cout << "The mean is: " << mean << endl;
        }

        else if (selection == 'S' || selection == 's') {

            int smallest{0};

            smallest = collection[0];
            for (int i{0}; i < collection.size(); ++i) {
                if (collection[i] < smallest) {
                    smallest = collection[i];
                }
            }

            cout << "The smallest number is: " << smallest << endl;
        }

        else if (selection == 'L' || selection == 'l') {

            int largest{0};

            largest = collection[0];
            for (int i{0}; i < collection.size(); ++i) {
                if (collection[i] > largest) {
                    largest = collection[i];
                }
            }

            cout << "The largest number is: " << largest << endl;
        }

        else {
            cout << "Unknown selection, please try again" << endl;
        }
        
        cout << "---------------------------------" << endl;

    } while (selection != 'Q' && selection != 'q');

    cout << "Goodbye" << endl;

    return 0;
}