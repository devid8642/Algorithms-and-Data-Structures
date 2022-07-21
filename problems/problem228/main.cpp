#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    set<int> ans;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        ans.insert(x);
    }
    
    cout << (int)ans.size() << endl;
    
    
    return 0;
}
