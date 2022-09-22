/* Section 11 Challenge

Modularise solution to Section 9 by refactoring your solution
so that it uses functions
*/

# include <iostream>
# include <vector>

using namespace std;

char main_menu () {

    char selection{};

    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display the mean of numbers" << endl;
    cout << "S - Display the smallest numbers" << endl;
    cout << "L - Display the largest numbers" << endl;
    cout << "Q - Quit" << endl;
    cout << "---------------------------------" << endl;

    cout << "Enter your choice: ";
    cin >> selection;

    return toupper(selection);
}

void print_list(vector<int> vec) {
    
    if (vec.size() == 0) {
                cout << "[]" << endl;
    }
    else {
        cout << "[";
        for (int i{0}; i < vec.size(); ++i) {
            cout << " " << vec[i];
        }
        cout << " ]" << endl;
    }
    
}

vector<int> add_to_list(vector<int> vec) {
    
    int new_int{0};

    cout << "Enter an integer to add to the list: ";
    cin >> new_int;
    vec.push_back(new_int);
    cout << new_int << " was added" << endl;

    return vec;
}

double mean_of_list(vector<int> vec) {
    
    double mean{0};

    for (int i{0}; i < vec.size(); ++i) {
        mean += vec[i];
    }
    mean /= vec.size();
    cout << "The mean is: " << mean << endl;

    return mean;
}

int get_smallest(vector<int> vec) {

    int smallest{0};

    smallest = vec[0];
    for (int i{0}; i < vec.size(); ++i) {
        if (vec[i] < smallest) {
            smallest = vec[i];
        }
    }

    cout << "The smallest number is: " << smallest << endl;

    return smallest;
}

int get_largest(vector<int> vec) {

    int largest{0};

    largest = vec[0];
    for (int i{0}; i < vec.size(); ++i) {
        if (vec[i] > largest) {
            largest = vec[i];
        }
    }

    cout << "The largest number is: " << largest << endl;

    return largest;
}

int main(){
    
    char selection{};
    double mean{0};
    int smallest{0};
    int largest{0};
    vector <int> collection (0);

    do {
        selection = main_menu();

        if (selection == 'P') {
            print_list(collection);
        }
        else if (selection == 'A') {
            collection = add_to_list(collection);
        }
        else if (selection == 'M') {
            mean = mean_of_list(collection);
        }
        else if (selection == 'S') {
            smallest = get_smallest(collection);
        }
        else if (selection == 'L') {
            largest = get_largest(collection);
        }
        else if (selection != 'Q') {
            cout << "Unknown selection, please try again" << endl;
        }

    } while (toupper(selection) != 'Q');

    cout << "Goodbye" << endl;

    return 0;
}