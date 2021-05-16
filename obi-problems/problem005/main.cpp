#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	if ((b-a) < (c-b))
		cout << 1 << endl;
	else if ((b-a) > (c-b))
		cout << -1 << endl;
	else
		cout << 0 << endl;

	return 0;
}