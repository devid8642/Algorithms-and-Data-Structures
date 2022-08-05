#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    int v[55];
    vector<string> ans;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
        
    sort(v, v + n);
    
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int x;
        
        cin >> x;
        
        int l = lower_bound(v, v + n, x) - v;
        
        if (v[l] == x)
            ans.push_back("Sim");
        else
            ans.push_back("Nao");
    }
    
    for (int i = 0; i < (int)ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}
