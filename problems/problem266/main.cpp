#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    pair<int, int> results[105];
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = 0; j < m; j++) {
            int t;
            cin >> t;
            tmp += t;
        }
        results[i] = {tmp, i};
    }
    
    sort(results, results + n);
    
    cout << results[0].second + 1 << endl;
    cout << results[1].second + 1 << endl;
    cout << results[2].second + 1 << endl;

    return 0;
}
