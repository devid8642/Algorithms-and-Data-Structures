#include <bits/stdc++.h>

using namespace std;

int main() {
	char tabu[7][7];
	int cont = 0;

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			cin >> tabu[i][j];
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (tabu[i][j] == '.') {
				if (j < 5) {
					if (tabu[i][j+1] == 'o' && tabu[i][j+2] == 'o')
						cont++;
				}
				if (j > 1) {
					if (tabu[i][j-1] == 'o' && tabu[i][j-2] == 'o')
						cont++;
				}
				if (i < 5) {
					if (tabu[i+1][j] == 'o' && tabu[i+2][j] == 'o')
						cont++;
				}
				if (i > 1) {
					if (tabu[i-1][j] == 'o' && tabu[i-2][j] == 'o')
						cont++;
				}
			}
			else
				continue;
		}
	}

	cout << cont << endl;

	return 0;
}