#include <bits/stdc++.h>

using namespace std;

int main() {
	int v[3];
	
	for (int i = 0; i < 3; i++) {
		cin >> v[i];
	}
	
	sort(v, v+3);
	
	cout << v[1] << endl;
	
	return 0;
	
}
