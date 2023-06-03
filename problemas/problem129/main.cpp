#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int v[1000];
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v, v + n);
	
	cout << v[0] << endl;
	
	return 0;
	
}
