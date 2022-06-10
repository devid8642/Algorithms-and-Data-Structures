#include <iostream>

using namespace std;

int main() {
	double n, f;
	
	cin >> n >> f;
	
	cout << fixed;
	cout.precision(2);
	
	cout << 100 - ((f/n)*100) << "%" << endl;
	
	return 0;
	
}
