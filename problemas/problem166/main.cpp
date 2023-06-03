#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	double v[5];
	
	for (int i = 0; i < 5; i++)
		cin >> v[i];
	
	sort(v, v + 5);
	
	cout << fixed;
	cout.precision(1);
	
	cout << v[1] + v[2] + v[3] << endl;
	
	return 0;
	
}
