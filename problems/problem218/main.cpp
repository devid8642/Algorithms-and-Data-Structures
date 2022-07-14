#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n; int dif; int ans = 0;
    bool ctl = false;
    int nums[1005];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            ans++;
        else if (!ctl) {
            dif = nums[i] - nums[i + 1];
            ctl = true;
        }
        else {
            if (nums[i] - nums[i + 1] == dif)
                continue;
            else {
                ctl = false;
                ans++;
                i--;
            }
        }
    }

    cout << ans << endl;

    return 0;

}
