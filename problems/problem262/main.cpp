#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int a, l, n;
    vector<pair<int, int>> ans;

    cin >> a >> l >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        int a1, a2;

        cin >> x >> y;

        if (a <= x && l <= y)
            ans.pb({x*y - a*l, i + 1});
        else if (l <= x && a <= y)
            ans.pb({x*y - a*l, i + 1});
    }

    sort(ans.begin(), ans.end());

    if (ans.size() == 0)
        cout << -1 << endl;
    else
        cout << ans[0].se << endl;

    return 0;

}
