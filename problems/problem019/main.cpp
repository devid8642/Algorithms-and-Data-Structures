#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    vector<vector<int>> nums;
    vector<int> ks;
    vector<int> ds;

    cin >> n >> d;

    while (n != 0 && d != 0) {
        string x;
        vector<int> num;
        int k =  n - d;
        ks.push_back(k);
        ds.push_back(d);

        cin >> x;

        for (int i = 0; i < (int)x.size(); i++) {
            int k = x[i] - 48;
            num.push_back(k);
        }

        nums.push_back(num);

        cin >> n >> d;

    }

    for (int i = 0; i < (int)nums.size(); i++) {
        vector<int> num = nums[i];
        vector<int> n_num;
        int k = ks[i];
        int d = ds[i];
        int l = 0;

        for (int j = 0; j < (int)num.size(); j++) {
            while (n_num.size() > 0 && num[j] > n_num.back() && l < d) {
                n_num.pop_back();
                l++;
            }
            if (n_num.size() < k)
                n_num.push_back(num[j]);
        }

        for (int j = 0; j < (int)n_num.size(); j++)
            cout << n_num[j];
        cout << endl;
    }

    return 0;

}
