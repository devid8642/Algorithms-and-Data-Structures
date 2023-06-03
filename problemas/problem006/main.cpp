#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, p, tot = 0;
	vector<int> chocolates;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p;
		chocolates.push_back(p);
	}
		

	sort(chocolates.rbegin(), chocolates.rend());

	while (!(chocolates.empty())) {

		if ((int)chocolates.size() >= 3) {
			tot += chocolates[0];
			tot += chocolates[1];
			chocolates.erase(chocolates.begin(), chocolates.begin()+3);
		}
		else {
			tot += chocolates[0];
			chocolates.erase(chocolates.begin());
		}
		
	}

	cout << tot << endl;

	return 0;
}