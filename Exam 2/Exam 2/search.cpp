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

		while (inFile) {
			inFile >> word;

			if (word == wordForQuery) {
				cout << "Found!" << endl;
				break;
			}
		}
	}

	cin.get();	cin.get();	//Hold the window open

	return 0;
}