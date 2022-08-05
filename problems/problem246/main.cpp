#include <iostream>

using namespace std;

int main() {
	int n1, p1, n2, p2, n3, p3;
	
	cin >> n1 >> p1;
	cin >> n2 >> p2;
	cin >> n3 >> p3;
	
	cout << (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3) << endl;
	
	return 0;
	
}
