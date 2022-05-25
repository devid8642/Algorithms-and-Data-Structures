#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int num[1005];
	vector<vector<int>> nums1;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < n; i++) {
		if (num[i] == 0 || num[i] == 5) {
			vector<int> vec;
			for (int j = 0; j < n; j++) {

				if (j != i) {
					if (j == n-1)
						vec.push_back(num[i]);
					else
						vec.push_back(num[j]);
				}
				else
					vec.push_back(num[n-1]);
			}
			nums1.push_back(vec);
		}

	}

	if (nums1.empty()) {
		cout << -1 << endl;
		return 0;
	}

	sort(nums1.rbegin(), nums1.rend());

	for (int j = 0; j < n; j++) {
		cout << nums1[0][j] << " ";
	}
	cout << "" << endl;

	return 0;

}
