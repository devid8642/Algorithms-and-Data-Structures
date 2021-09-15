#include <bits/stdc++.h>

using namespace std;


int main() {
	int l, c, p;
	char tabu[11][11];
	int resp = 0;

	cin >> l >> c;
	cin >> p;
	
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++)
			tabu[i][j] = '0';
	}

	for (int i = 0; i < p; i++) {
		int x, y;
		cin >> x >> y;
		tabu[x-1][y-1] = 'p';
	}

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			char peca = tabu[i][j];
			if (peca != 'p')
				continue;
			else {
				if (j != 0) {
					if (tabu[i][j-1] != 'p')
						tabu[i][j-1] = 'b';
				}
				if (j != c-1) {
					if (tabu[i][j+1] != 'p')
						tabu[i][j+1] = 'b';
				}
				if (i != 0) {
					if (tabu[i-1][j] != 'p')
						tabu[i-1][j] = 'b';
				}
				if (i != l-1) {
					if (tabu[i+1][j] != 'p')
						tabu[i+1][j] = 'b';
				}
			}
		}
	}

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			char peca = tabu[i][j];

			if (peca != 'b')
				continue;
			else {
				int count_b = 0;
				
				if (j != 0) {
					if (tabu[i][j-1] == 'b')
						count_b++;
				}

				if (j != c-1) {
					if (tabu[i][j+1] == 'b')
						count_b++;
				}

				if (i != 0) {
					if (tabu[i-1][j] == 'b')
						count_b++;
				}

				if (i != l-1) {
					if (tabu[i+1][j] == 'b')
						count_b++;
				}

				if (count_b > 1)
					tabu[i][j] = '0';
				else {
					if (j != 0)
						tabu[i][j-1] = '0';

					if (j != c-1)
						tabu[i][j+1] = '0';

					if (i != 0)
						tabu[i-1][j] = '0';

					if (i != l-1)
						tabu[i+1][j] = '0';
				}

			}
		}
	}

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (tabu[i][j] == 'b')
				resp++;
		}
	}	

	cout << resp << endl;
	
	return 0;

}
