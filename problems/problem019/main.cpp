#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    vector<stack<int>> nums;
    vector<int> ks;

    cin >> n >> d;

    while (n != 0 && d != 0) {
        string x;
        stack<int> num;
        int k =  n - d;
        ks.push_back(k);

        cin >> x;

        for (int i = 0; i < (int)x.size(); i++) {
            int k = x[i] - 48;
            num.push(k);
        }

        nums.push_back(num);

        cin >> n >> d;

    }

    for (int i = 0; i < (int)nums.size(); i++) {
        stack<int> num = nums[i];
        stack<int> n_num;
        int k = ks[i];
        int j = 0;

        while (num.size() != 0) {
            if (j == 0) {
                n_num.push(num.top());
                num.pop();
                j++;
            }
            else {
                if (num.top() > n_num.top()) {
                    n_num.pop();
                    n_num.push(num.top());
                    num.pop();
                }
                else {
                    if (n_num.size() == k) {
                        num.pop();
                        continue;
                    }
                    else {
                        n_num.push(num.top());
                        num.pop();
                    }
                }
            }
        }

        while (n_num.size() != 0) {
            cout << n_num.top();
            n_num.pop();
        }
        cout << endl;
    }

    return 0;

}
