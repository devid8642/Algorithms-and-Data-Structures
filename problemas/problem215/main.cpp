#include <iostream>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	if (n >= 9)
		cout << n - 9 << endl;
	else {
		int h = 9;
		for (int x = n; x > 0; x--) {
			h--;
		}
		n = 24;
		cout << 24 - h << endl;
	}
	
	return 0;
	
}
