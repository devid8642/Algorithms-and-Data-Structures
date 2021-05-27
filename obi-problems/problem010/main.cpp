#include <iostream>

using namespace std;

int main() {
	int d, e;

	cin >> d;

	e = d-3;
	
	if (e >= 8) {
		d = e/8;
		e -= 8*d;
	}

	if (e == 3)
		cout << 1 << endl;
	else if (e == 4)
		cout << 2 << endl;
	else
		cout << 3 << endl;

	return 0;
}