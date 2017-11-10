#include <iostream>

using namespace std;

void validWeekday(int day)
{
	int weekday;
	cin >> weekday;
	if (0 < weekday && weekday < 8)
		cout << "Input is valid." << endl;
	else
		cout << "Input is invalid." << endl;
}

int main()
{
	for (int i = -5; i < 10; i++)
	{
		cout << i << " | ";
		validWeekday(i);
	}

	cin.get(); cin.get();	//Hold the window open

	return 0;
}