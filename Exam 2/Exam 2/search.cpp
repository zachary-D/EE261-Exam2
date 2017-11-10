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

	string word;

	while (inFile) {
		inFile >> word;

		if (word == wordForQuery) {
			cout << "Found!" << endl;
		}
	}

	return 0;
}