#include <bits/stdc++.h>

using namespace std;

int main() {
	string p1, p2;
	bool control = false;

	cin >> p1 >> p2;

	for (int i = (int)p1.size()-1; i > -1; i--) {
		for (int j = (int)p2.size()-1; j > -1; j--) {
			if (p1[i] == p2[j]) {
				cout << i+1 << " " << j+1 << endl;
				control = true;
				break;		
			}
		}

		if (control)
			break;
	}

	if (!control)
		cout << -1 << " " << -1 << endl;

	return 0;
}