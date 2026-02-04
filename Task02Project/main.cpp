#include <iostream>
using namespace std;

double calc_num(double a);

int main() {
	double a;
	cout << "Input a number: ";
	cin >> a;

	cout << "Your new number : " << calc_num(a);
	return 0;
}