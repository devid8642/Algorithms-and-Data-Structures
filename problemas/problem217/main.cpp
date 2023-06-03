#include <bits/stdc++.h>

using namespace std;

void dfs(int s, vector<int> adj[], int visit[]) {
    visit[s] = 1;
    
    for (int i = 0; i < adj[s].size(); i++) {
        int x = adj[s][i];
        
        if (visit[x] == 0)
            dfs(x, adj, visit);
    }
}

int main() {
    int n, m;
    int ans = 0;
    
    cin >> n >> m;
    
    vector<int> grafo[n + 1];
    int visit[n + 1];
    memset(visit, 0, sizeof visit);
    
    for (int i = 1; i <= m; i++) {
        int u, v;
        
        cin >> u >> v;
        
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    
    for (int i = 1; i <= n; i++) {
        if (visit[i] == 0) {
            dfs(i, grafo, visit);
            ans++;
        }
    }
    
    cout << ans << endl;

    return 0;
}
