#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    vector<int> premia, ogros, faixas;

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n - 1; i++) {
        int a;

        cin >> a;

        faixas.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        int x;

        cin >> x;

        premia.push_back(x);
    }

    for (int i = 0; i < m; i++) {
        int o;

        cin >> o;

        int pos = upper_bound(faixas.begin(), faixas.end(), o) - faixas.begin();
        ogros.push_back(premia[pos]);
    }

    for (int i = 0; i < ogros.size(); i++)
        cout << ogros[i] << " ";
    cout << endl;

    return 0;

}
