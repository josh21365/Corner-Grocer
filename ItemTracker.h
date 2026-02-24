
#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <map>
#include <string>

using namespace std;

class ItemTracker
{
private:
	// Main data type is a map
	map<string, int> searchList;

public:
	void DisplayMenu();
	int SearchValue(map<string, int>& searchList);
	void PrintHistogram(int frequency);
	int backupFile(map<string, int>& searchList);
	void Menu(int userInput, map<string, int>& searchList);
};

#endif
