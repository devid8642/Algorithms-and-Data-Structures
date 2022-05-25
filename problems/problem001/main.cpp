#include <iostream>

using namespace std;

int main() {
	int n, tam, p = 0, m = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tam;
		if (tam == 1)
			p++;
		else
			m++;
	}

	cin >> tam;

	if (tam > p)
		cout << "N" << endl;
	else {
		cin >> tam;
		if (tam > m)
			cout << "N" << endl;
		else
			cout << "S" << endl;
	}

	return 0;
}