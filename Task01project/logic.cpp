int calc_s(int a, int b, int c) {
	int s;
	s = 2 * (a * b + b * c + a * c);
	return s;
}
int calc_v(int a, int b, int c) {
	int v;
	v = a * b * c;
	return v;
}