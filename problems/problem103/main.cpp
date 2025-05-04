#include <bits/stdc++.h>

using namespace std;

int main() {
    int k = 0;
    int ans[10000];
    
    while (true) {
        int n, x;
        
        cin >> n;
        
        if (n == 0)
            break;
            
        for (int i = 1; i <= n; i++) {
            int x;
            
            cin >> x;
            
            if (x == i) {
                ans[k] = x;
                k++;
            }
        }
    }
    
    for (int i = 0; i < k; i++) {
        cout << "Teste " << i + 1 << endl;
        cout << ans[i] << endl;
        cout << endl;
    }

    return 0;
}
