#include <iostream>

using namespace std;

int main() {
	int xm, ym, xr, yr;
	
	cin >> xm >> ym >> xr >> yr;
	
	cout << (abs(xr - xm)) + (abs(yr - ym)) << endl;
	
	return 0;
	
}
