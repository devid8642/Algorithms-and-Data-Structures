#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, s, d;
	int cont = 0;

	cin >> a >> s >> d;

	while (a > 0) {
		a -= s;
		if (a <= 0) {
			cont++;
			break;
		}
		a += d;
		cont++;
	}

	cout << cont << endl;

	return 0;
}