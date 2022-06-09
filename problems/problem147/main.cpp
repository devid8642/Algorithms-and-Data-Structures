#include <iostream>

using namespace std;

int main() {
	int m;
	
	cin >> m;
	int x = m/60;
	
	cout << x << endl;
	cout << m - 60*x << endl;
	
	return 0;
	
}
