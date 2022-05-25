#include <iostream>

using namespace std;

int main() {
	int m, a, b, c;

	cin >> m >> a >> b;

	c = m-(a+b);

	if (a > b) {
		if (a > c)
			cout << a << endl;
		else
			cout << c << endl;
	}
	else {
		if (b > c)
			cout << b << endl;
		else
			cout << c << endl;
	}

	return 0;
}