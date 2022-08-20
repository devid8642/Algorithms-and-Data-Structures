#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n;
    double t;
    vector<int> v;
    vector<double> ans;

    cin >> t >> n;

    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;

        v.pb(x);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        double c = v[i];
        double d;
        if (i == 0) {
            double c2 = v[i + 1];
            d = ((c + c2)/2);
        }
        else if (i == n - 1) {
            d = t - c;
            double c2 = v[i - 1];
            d += c - ((c + c2)/2);
        }
        else {
            double c2 = v[i - 1];
            double c3 = v[i + 1];

            d = c - ((c + c2)/2);
            d += (((c + c3)/2)) - c;
        }

        ans.pb(d);
    }

    sort(ans.begin(), ans.end());

    cout << fixed;
    cout.precision(2);

    cout << ans[0] << endl;

    return 0;

}

