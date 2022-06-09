#include <iostream>

using namespace std;

int main() {
	int p, n;
	
	cin >> p >> n;
	
	for (int i = 0; i < n; i++) {
		int x;
		
		cin >> x;
		
		p += x;
		
		if (p >= 100)
			p = 100;
		if (p <= 0)
			p = 0;
	}
	
	cout << p << endl;
	
	return 0;
	
}
