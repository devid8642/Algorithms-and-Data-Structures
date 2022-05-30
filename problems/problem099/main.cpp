#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    double valor[10000];
    double tot = 0;
    vector<pair<double, int>> ans;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
        cin >> valor[i];
        
    for (int i = 0; i < n; i++) {
        double g;
        
        cin >> g;
        
        tot += m*g;
        
        ans.push_back({tot*valor[i], i + 1});
    }
    
    sort(ans.begin(), ans.end());
    
    cout << fixed;
    cout.precision(2);
    
    cout << ans[n - 1].second << " " << ans[n - 1].first << endl;
    cout << ans[0].second << " " << ans[0].first << endl;

    return 0;
}
