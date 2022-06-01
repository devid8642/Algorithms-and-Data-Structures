#include <iostream>

using namespace std;

int main() {
	int a, b;
	double tot = 0;
	
	cin >> a >> b;
	
	if (a == 1)
		tot += b*6.9;
	else if (a == 2)
		tot += b*7.3;
	else if (a == 3)
		tot += b*4.5;
	else
		tot += b*5.7;
		
	cout << fixed;
	cout.precision(2);
	
	cout << "O valor total da compra e R$ " << tot << endl;
		
	return 0;
	
}
