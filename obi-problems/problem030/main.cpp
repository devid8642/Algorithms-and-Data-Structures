#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, h, l;
	
	cin >> a >> b >> c;
	cin >> h >> l;
	
	if (a <= h && b <= l || a <= l && b <= h) {
		cout << 'S' << endl;
		return 0;
	}
	else if (a <= h && c <= l || a <= l && c <= h) {
		cout << 'S' << endl;
		return 0;
	}
	else if (b <= h && c <= l || b <= l && c <= h) {
		cout << 'S' << endl;
		return 0;
	}
	
	cout << 'N' << endl;
	
	return 0;
	
}
