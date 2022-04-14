#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n, time = 0, resp = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,  int>>> clientes;
    vector<int> caixas;

    cin >> c >> n;

    if (c >= n) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int t, d;
        
        cin >> t >> d;

        clientes.push({t, d});
        caixas.push_back(0);
    }
    
    while (!clientes.empty()) {
        for (int i = 0 ; i < c; i++) {
            if (clientes.empty())
                break;
            
            int t = clientes.top().first;
            int d = clientes.top().second;

            if (caixas[i] - t > 20)
                resp++;

            if (t <= caixas[i])
                caixas[i] += d;
            else
                caixas[i] += t + d;

            clientes.pop();
        }
    }

    cout << resp << endl;
    
    return 0;
}
