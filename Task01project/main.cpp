#include <iostream>
using namespace std;

int calc_s(int a, int b, int c);
int calc_v(int a, int b, int c);

int main() {
	int a, b, c;
	cout << "Input sides od cube: ";
	cin >> a >> b >> c;

	cout << "Volume of your cube is " << calc_v(a, b, c) <<
		". Square of your cube is " << calc_s(a, b, c) << ".";
	return 0;
}