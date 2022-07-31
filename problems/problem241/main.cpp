#include <iostream>

using namespace std;

int main() {
	double l; int ans = 1;
	
	cin >> l;
	
	while (l >= 2) {
		l = l/2;
		ans *= 4;
	}

	cout << ans << endl;
	
	return 0;
	
}
