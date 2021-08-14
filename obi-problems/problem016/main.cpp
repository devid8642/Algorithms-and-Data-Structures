#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, mov;
	char moeda;

	cin >> n >> moeda;

	for (int i = 0; i < n; i++) {
		cin >> mov;

		if (mov == 1) {
			if (moeda == 'A')
				moeda = 'B';
			else if (moeda == 'B')
				moeda = 'A';
		}

		else if (mov == 2) {
			if (moeda == 'B')
				moeda = 'C';
			else if (moeda == 'C')
				moeda = 'B';
		}

		else if (mov == 3) {
			if (moeda == 'A')
				moeda = 'C';
			else if (moeda == 'C')
				moeda = 'A';
		}
	}

	cout << moeda << endl;

	return 0;
}