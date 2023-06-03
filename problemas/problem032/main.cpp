#include <bits/stdc++.h>

using namespace std;
int n, k;
int dp[1010][1010];
int mod = 1e9 + 7;

int solve(int i, int s) {

    if (i == n)
        return s < k;

    int &ans = dp[i][s];

    if (ans != -1)
        return ans;

    ans = solve(i+1, 0)%mod;

    if (s+1 < k) {
        ans += solve(i+1, s+1)%mod;
        ans %= mod;
    }
    return ans;

}

int main() {
    cin >> n >> k;

    memset(dp, -1, sizeof dp);

    cout << solve(0, 0) << endl;

    return 0;

}
