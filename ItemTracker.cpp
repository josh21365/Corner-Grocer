#include "ItemTracker.h"
#include <iostream>
#include <fstream>
using namespace std;

void ItemTracker::DisplayMenu() {
    cout << "----------------------------------------------------" << endl;
    cout << "1. Type an item" << endl;
    cout << "2. Print frequency of all items purchased" << endl;
    cout << "3. Print the frequency of all items into a histogram" << endl;
    cout << "4. Exit program" << endl;
    cout << "-----------------------------------------------------" << endl;
}

int ItemTracker::SearchValue(map<string, int>& searchList) {
    // Made item as a temp value to help search through the file
    ifstream inFS;
    string item;

    inFS.open("CS210_Project_Three_Input_File.txt");

    if (!inFS.is_open()) {
        cout << "Could not open file." << endl;
        return 1;
    }

    while (inFS >> item) {
        searchList[item]++;
    }

    inFS.close();
    return 0;
}

void ItemTracker::PrintHistogram(int frequency) {
    // Converts numbers to *
    int i;

    for (i = 0; i < frequency; ++i) {
        cout << "*";
    }
    cout << endl;
}

int ItemTracker::backupFile(map<string, int>& searchList) {
    // This outputs data from the map

    ofstream outFS;
    outFS.open("frequency.dat");

    if (!outFS.is_open()) {
        // Failure is 1
        
        cout << "Could not open the write file" << endl;
        return 1;
    }

    // Auto declares the data type, first and second is the string and int and structures the output
    for (auto item : searchList) {
        outFS << item.first << " " << item.second << endl;
    }

    outFS.close();
    return 0;
}

void ItemTracker::Menu(int userInput, map<string, int>& searchList) {
    // Core logic function
    switch (userInput) {
    case 1: {
        // Search item case

        string itemToSearch;
        cout << "Enter an item you would like to search: " << endl;
        cin >> itemToSearch;
        cout << endl;

        // Input validation using count to find if it is on the map
        if (searchList.count(itemToSearch)) {
            cout << itemToSearch << " appears " << searchList[itemToSearch] << " times." << endl;

        }
        else {
            cout << itemToSearch << " does not appear in the list." << endl;
        }
        break;
    }

    case 2:
        // print list using auto

        for (auto item : searchList) {
            cout << item.first << " " << item.second << endl;
        }
        cout << endl;
        break;
    case 3:
        // histogram printing using auto

        for (auto item : searchList) {
            cout << item.first << " ";
            PrintHistogram(item.second);
            cout << endl;
        }
        break;
    case 4:
        // exit
        cout << "Exiting the program..." << endl;
        exit(0);

    default:
        // Input validation

        cout << "Invalid input." << endl;
        break;
    }
}