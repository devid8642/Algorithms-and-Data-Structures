#include <iostream>

using namespace std;

int fat(int x) {
	int ans = 1;
	
	for (int i = x; i > 1; i--)
		ans *= i;
	
	return ans;
}

int main() {
	int n;
	
	cin >> n;
	
	cout << fat(n) << endl;
	
	return 0;
	
}
