#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n, resp = 0;
    vector<pair<int, int>> clientes;
    priority_queue<int, vector<int>, greater<int>> caixas;

    cin >> c >> n;

    for (int i = 0; i < n; i++) {
        int t, d;

        cin >> t >> d;

        clientes.push_back({t, d});
    }

    for (int i = 0; i < c; i++)
        caixas.push(0);

    if (c >= n) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int t = clientes[i].first;
        int d = clientes[i].second;

       if (caixas.top() - t > 20)
           resp++;

        caixas.push(max(caixas.top(), t)+d);
        caixas.pop();
    }

    cout << resp << endl;

    return 0;
}
