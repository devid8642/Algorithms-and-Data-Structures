#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, fi = 0;
	vector<int> nums;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;

		cin >> num;

		nums.push_back(num);
	}

	sort(nums.rbegin(), nums.rend());

	for (int i = 1; i <= nums[0]; i++) {
		int count = 0;

		for (int j = 0; j < n; j++) {
			if (i <= nums[j])
				count++;
			else
				break;

		}

		if (count >= i) {
			fi = i;
		}
	}


	cout << fi << endl;
	
	return 0;

}
