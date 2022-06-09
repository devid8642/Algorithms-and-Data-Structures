#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    set<int> s;
    
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int x;
        
        cin >> x;
        
        s.insert(x);
    }
    
    cout << n - s.size() << endl;
    
    return 0;
}
