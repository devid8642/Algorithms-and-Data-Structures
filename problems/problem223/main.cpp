#include <bits/stdc++.h>

using namespace std;

bool primo(long long unsigned int x) {
	
	if (x == 2)
		return true;
	else if (x == 1)
		return false;
	
	for (int i = 2 ; i <= sqrt(x); i++) {
		if (x % i == 0)
			return false;
	}
	
	return true;
}

int main() {
	long long unsigned int n;
	
	cin >> n;
	
	if (primo(n))
		cout << 'S' << endl;
	else
		cout << 'N' << endl;
	
	return 0;
	
}
