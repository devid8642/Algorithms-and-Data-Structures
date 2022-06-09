#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int ans = 0;
	
	cin >> a >> b >> c;
	
	while (true) {
		bool ctl = false;
		if (a >= 2 && b >= 3 && c >= 5) {
			a -= 2;
			b -= 3;
			c -= 5;
			ctl = true;
			ans++;
		}
		if (!ctl)
			break;
	}
	
	cout << ans << endl;
	
	return 0;
	
}
