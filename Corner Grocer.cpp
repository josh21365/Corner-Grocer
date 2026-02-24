#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <limits>
#include "ItemTracker.h"
// 2/20/2026 Joshua Velazquez [Corner Grocer]

using namespace std;
// Headers
void checkInput(int& userInput);

int main() {
    // Declare variables

    ItemTracker tracker;
    int userInput = 0;
    map<string, int> searchList;

    // Load file if it returns 1 it failed to load else it continues
    if (tracker.SearchValue(searchList) == 1) {

        return 1;
    }

    // Start writing backup information
    tracker.backupFile(searchList);
        // Main loop
        while (userInput != 4) {

            tracker.DisplayMenu();
            checkInput(userInput);
            cout << endl;

            // Input validation
            if (userInput >= 1 && userInput <= 4) {
                tracker.Menu(userInput, searchList);
            }
            else {
                cout << "Invalid input, enter a number 1-4." << endl;
            }
        }
    return 0;
}

void checkInput(int& userInput) {
    while (true) {
        if (cin >> userInput) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return;
        }
        cout << "Invalid input, enter a number 1-4." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}