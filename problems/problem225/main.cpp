#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    int plant[55][55];
    int ans = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> plant[i][j];
    }
    
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int li, ci, lf, cf;
        
        cin >> li >> ci >> lf >> cf;
        
        for (int j = li - 1; j < lf; j++) {
            for (int k = ci - 1; k < cf; k++) {
                ans += plant[j][k];
                plant[j][k] = 0;
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}
