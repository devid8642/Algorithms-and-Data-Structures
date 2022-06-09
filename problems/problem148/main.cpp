#include <iostream>

using namespace std;

int main() {
	int n;
	int p = 1;
	
	cin >> n;
	
	for (int i = 2; i <= n; i++) {
		p *= i;	
	}
	
	cout << p << endl;
	
	return 0;
	
}
