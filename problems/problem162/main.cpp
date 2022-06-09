#include <iostream>

using namespace std;

int main() {
	unsigned int n;
	
	cin >> n;
	
	if (n < 1e6)
		cout << 0 << endl;
	else 
		cout << n/1e6 << endl;
	
	return 0;
	
}
