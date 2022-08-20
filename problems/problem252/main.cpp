#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int v[10005];
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
        
    sort(v, v + n);
    
    if (v[0] > 8) {
        cout << 'N' << endl;
        
        return 0;
    }
    
    for (int i = 1; i < n; i++) {
        if (v[i] - v[i - 1] > 8) {
            cout << 'N' << endl;
            
            return 0;
        }
    }
    
    cout << 'S' << endl;

    return 0;
}
