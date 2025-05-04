#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int v[1005];
    char ans = 'N';
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
        
    for (int i = 1; i < n - 1; i++) {
        if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
            ans = 'S';
            break;
        }
    }
    
    cout << ans << endl;
        
    return 0;
}
