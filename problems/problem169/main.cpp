#include <iostream>

using namespace std;

int main() {
	int n;
	double v1, v2;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		double x;
		
		cin >> x;
		
		if (i == 0)
			v1 = 100*x;
		else if (i == n - 1) {
			v2 = 100*x;
		}
	}
	
	cout << fixed;
	cout.precision(2);
	
	cout << v2 - v1 << endl;
	
	return 0;
	
}
