#include <iostream>

using namespace std;

// Q1. The current program does not compile. Add one statement here to fix the problem and make it compile. (0.5 point) Explain why your statement makes the difference. (0.5)
#include <iomanip>		//setprecision() is defined in iomanip, and therefore iomanip needs to be included in order for the program to compile

int main() {
	double result = 0;

	power(10, 6, result);

	cout << fixed;
	cout << "10 to the power of 6 yields " << setprecision(0) << result << endl;
	// Q2. The current version outputs 0 for result. Modify the definition of function power() such that the program outputs 1,000,000 rather than 0. (0.5) Explain what makes the difference. (0.5)

	return 0;
}

void power(double base, int exponent, double result) {
	result = 1;
	while (exponent>0) {
		result = base * result;
		exponent = exponent - 1;
	}
}