#include <iostream>

using namespace std;

void validWeekday(int day)
{
	int weekday;
	cin >> weekday;
	if (0 < weekday < 8)
		cout << "Input is valid." << endl;
	else
		cout << "Input is invalid." << endl;
}

int main()
{
	validWeekday(5);

	cin.get(); cin.get();	//Hold the window open

	return 0;
}