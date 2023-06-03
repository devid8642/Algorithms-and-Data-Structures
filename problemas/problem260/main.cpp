#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n;
    vector<string> ans;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string e;
        double a, g;

        cin >> e >> a >> g;

        if (a <= 0.7*g)
            ans.pb(e);
    }

    if (ans.size() == 0)
        cout << '*' << endl;

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;

}
