#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    vector<int> rank;
    
    cin >> n >> p;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        
        cin >> x >> y;
        
        rank.push_back(x + y);
    }
    
    sort(rank.begin(), rank.end());
    
    int pos = lower_bound(rank.begin(), rank.end(), p) - rank.begin();
    
    cout << n - pos << endl;
        
    return 0;
}
