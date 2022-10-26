#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int l, a, p, r, d;
	double diagonal;
	
	cin >> l >> a >> p >> r;
	
	d = 2*r;
	diagonal = sqrt(l*l + a*a + p*p);
	
	if (diagonal <= d)
	    cout << 'S' << endl;
	else
	    cout << 'N' << endl;
	
	return 0;
	
}
