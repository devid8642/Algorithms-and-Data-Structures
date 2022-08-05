#include <iostream>

using namespace std;

int main() {
	double sum;
	int n;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		double x;
		
		cin >> x;
		
		sum += x;
	}
	
	cout.precision(2);
	cout << fixed;
	
	cout << sum/n << endl;
	
	return 0;
	
}
