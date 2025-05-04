#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	cin >> a >> b;
	
	cout << a - b << endl;
	
	if (a - b >= 18)
		cout << "Maior" << endl;
	else
		cout << "Menor" << endl;
	
	return 0;
	
}
