#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n;
    int v[50005]; int dp[50005];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    dp[0] = v[0];

    for (int i = 1; i < n; i++)
        dp[i] = max(v[i], dp[i - 1] + v[i]);

    sort(dp, dp + n);

    cout << dp[n - 1] << endl;

    return 0;

}
