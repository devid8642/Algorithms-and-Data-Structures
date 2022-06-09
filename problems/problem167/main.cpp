#include <iostream>

using namespace std;

int main() {
	int k, x, y;
	
	cin >> k;
	cin >> x >> y;
	
	if (abs(x - y) >= k)
		cout << "EH SUFICIENTE" << endl;
	else
		cout << "NAO EH SUFICIENTE" << endl;
	
	return 0;
	
}
