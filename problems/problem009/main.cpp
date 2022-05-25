#include <iostream>

using namespace std;

int main() {
	int b, t, a1, a2;

	cin >> b >> t;

	if (b == t) {
		a1 = (160-b)*70;
		a2 = (160*70)-a1;
	}
	else {
		if (b > t) {
			a1 = (((b-t)*70)/2)+((160-b)*70);
			a2 = (160*70)-a1;
		}
		else {
			a2 = (((t-b)*70)/2)+(b*70);
			a1 = (160*70)-a2;
		}
	}
	if (a1 > a2)
		cout << 2 << endl;
	else if (a1 < a2)
		cout << 1 << endl;
	else 
		cout << 0 << endl;

	return 0;
}