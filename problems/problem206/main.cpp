#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n, m;
    int v[10000];
    long long int ans = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++) {
        int d;

        if (i == 0)
            d = 0;
        else
            d = v[i - 1];

        if (v[i] >= d && m - v[i] >= d) {
            ans += min(v[i], m - v[i]);
            v[i] = min(v[i], m - v[i]);
        }
        else {
            if (v[i] >= d)
                ans += v[i];
            else if (m - v[i] >= d) {
                ans += m - v[i];
                v[i] = m - v[i];
            }
            else {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;

    return 0;

}
