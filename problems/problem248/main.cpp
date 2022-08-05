#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n, k; int ans = 0;
    int v[55];

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int x;

        cin >> v[i];

        if (i <= k - 1 && v[i] != 0)
            ans++;
        else if (v[i] == v[k - 1] && v[i] != 0)
            ans++;
    }

    cout << ans << endl;

    return 0;

}
