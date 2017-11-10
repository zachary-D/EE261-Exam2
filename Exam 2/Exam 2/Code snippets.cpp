#include <iostream>
#include <vector>

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

void isFailing(double average)
{
	if (average >= 60.00)
		if (average < 70.00)
			cout << "Passing but marginal." << endl;
		else cout << "Passing" << endl;
	else
		cout << "Failing" << endl;
}

bool comparisonTest()
{
	string num1 = "899";
	string num2 = "9";

	return num1 < num2;
}


int main()
{
	cout << comparisonTest();

	cin.get(); cin.get();	//Hold the window open

	return 0;
}