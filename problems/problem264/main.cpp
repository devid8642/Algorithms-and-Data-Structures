#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	
	cin >> n;
	
	int v[n];
	
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	cin >> k;
	
	int x = lower_bound(v, v + n, k) - v;
	
	if (v[x] == k)
		cout << "pertence" << endl;
	else
		cout << "nao_pertence" << endl;
	
	return 0;
	
}
