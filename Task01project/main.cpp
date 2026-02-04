#include <iostream>
using namespace std;

int calc_s(int a, int b, int c);
int calc_v(int a, int b, int c);

int main() {
	int a, b, c;
	cout << "Input sides od cube: ";
	cin >> a >> b >> c;

	if (a < 1 || b < 0 || c < 0) {
		cout << "Error. Try again...";
		return -1;
	}

	cout << "Volume of your cube is " << calc_v(a, b, c) <<
		". Square of your cube is " << calc_s(a, b, c) << ".";
	return 0;
}