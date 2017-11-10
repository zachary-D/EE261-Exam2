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


int main()
{
	vector<double> grades = { 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100 };

	for(auto iter = grades.begin(); iter != grades.end(); iter++)
	{
		cout << *iter << " | ";
		isFailing(*iter);
	}

	cin.get(); cin.get();	//Hold the window open

	return 0;
}