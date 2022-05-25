#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, cad_a, cad_b;
	int cadeiras[] = {1, 2, 0};
	int pos = 0;

	cin >> a >> b;
	
	for (int i = 0; i < a; i++) {
		cad_a = cadeiras[pos];
		pos++;
		if (pos > 2)
			pos = 0;
	}
	
	pos = 0;

	for (int i = 0; i < b; i++) {
		cad_b = cadeiras[pos];
		pos++;
		if (pos > 2)
			pos = 0;
	}

	if (cad_a == cad_b) {
		if (pos < 2)
			cad_b = cadeiras[pos++];
		else
			cad_b = 0;
	}

	for (int i = 0; i < 3; i++) {
		if (cadeiras[i] == cad_a || cadeiras[i] == cad_b)
			continue;
		else
			cout << cadeiras[i] << endl;
	}
	
	return 0;

}
