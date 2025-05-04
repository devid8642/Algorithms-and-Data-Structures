#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n, k; int ans = 0;
    vector<int> compet;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int x;

        cin >> x;

        compet.pb(x);
    }

    sort(compet.rbegin(), compet.rend());
    
    int i = compet[0];

    while (!compet.empty()) {
        if (k > 0) {
            ans++;
            i = compet[0];
            compet.erase(compet.begin());
            k--;
        }
        else if (compet[0] == i) {
            ans++;
            i = compet[0];
            compet.erase(compet.begin());
        }
        else
            break;
    }

    cout << ans << endl;

    return 0;

}
