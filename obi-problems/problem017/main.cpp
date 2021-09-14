#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	for (int i = 1; i <= a-6; i++) {
		int c = (a-(2*i))/2;
		int h = i+2;
		if ((c*h)-a == b) {
			if (c > h)
				cout << h << " " << c << endl;
			else if (c < h)
				cout << c << " " << h << endl;
			else
				cout << c << " " << h << endl;
			return 0;
		}

	}

	cout << -1 << " " << -1 << endl;

	return 0;
}
