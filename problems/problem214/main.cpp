#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    vector<int> ans;
    
    cin >> n >> m;
    
    vector<int> grafo[n + 1];
    
    for (int i = 0; i < m; i++) {
        int t, a, b;
        
        cin >> t >> a >> b;
        
        if (t == 1) {
            grafo[a].push_back(b);
            grafo[b].push_back(a);
        }
        else {
            bool ctl = true;
            for (int j = 0; j < (int)grafo[a].size(); j++) {
                if (grafo[a][j] == b) {
                    ans.push_back(1);
                    ctl = false;
                    break;
                }
            }
            if (ctl)
                ans.push_back(0);
        }
    }
    
    for (int i = 0; i < (int)ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}
