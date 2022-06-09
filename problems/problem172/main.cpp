#include <iostream>

using namespace std;

int main() {
	double x;
	
	cin >> x;
	
	x = 2*x;
	
	cout << fixed;
	cout.precision(2);
	
	cout << "Joao e Henrique devem guardar R$ " << x - ((15*x)/100) << endl;
	
	return 0;
	
}
