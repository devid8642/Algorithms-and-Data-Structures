#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n;
    vector<pair<string, int>> ans;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        string in, out;

        cin >> in;


        if (in.size() > 10) {
            out.pb(in[0]);
            out.pb(in[in.size() - 1]);
            ans.pb({out, in.size() - 2});
        }
        else
            ans.pb({in, 0});
    }

    for (int i = 0; i < (int)ans.size(); i++) {
        if (ans[i].se == 0)
            cout << ans[i].fi << endl;
        else
            cout << ans[i].fi[0] << ans[i].se << ans[i].fi[1] << endl;
    }

    return 0;

}
