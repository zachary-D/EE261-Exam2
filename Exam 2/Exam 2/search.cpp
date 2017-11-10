#include <string>
#include <iostream>
#include <fstream>

using namespace std;


int main() {
	string wordForQuery;

	cout << "Enter a word to be searched in the file words.txt:";
	cin >> wordForQuery;

	ifstream inFile;
	inFile.open("words.txt");

	if (!inFile)
	{
		cout << "An error was encountered opening \"words.txt\"." << endl;
	}
	else
	{
		string word;
		bool found = false;

		while (inFile) {
			inFile >> word;

			if (word == wordForQuery) {
				cout << "Found!" << endl;
				found = true;
				break;
			}
		}
		if(!found) cout << "Not found!" << endl;
	}

	cin.get();	cin.get();	//Hold the window open

	return 0;
}