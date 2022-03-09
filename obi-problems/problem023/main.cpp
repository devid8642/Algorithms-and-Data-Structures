#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n, time = 0, resp = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,  int>>> clientes;

    cin >> c >> n;

    for (int i = 0; i < n; i++) {
        int t, d;
        
        cin >> t >> d;

        clientes.push({t, d});
    }
    
    while (!clientes.empty()) {
        if (time >= clientes.top().first) {
            int tmp = 0;

            for (int i = 0; i < c; i++) {
                if (clientes.top().first > time + tmp)
                    break;
                if (time - clientes.top().first >= 20)
                    resp++;
                if (i == 0) {
                    tmp += clientes.top().second;
                    clientes.pop();
                }
                else {
                    if (tmp >= clientes.top().second)
                        clientes.pop();
                    else {
                        tmp += clientes.top().second - tmp;
                        clientes.pop();
                    }
                }
            }
            time += tmp; 
        }
        else
            time += clientes.top().first;
    }

    cout << resp << endl;
    
    return 0;
}
