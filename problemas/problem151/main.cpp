#include <bits/stdc++.h>

using namespace std;

int main() {
    int v[4];
    int ans;
    
    for (int i = 0; i < 4; i++)
        cin >> v[i];
        
    sort(v, v + 4);
    
    ans = v[0];
    
    for (int i = 1; i < 4; i++)
        ans += v[i] - 1;
        
    cout << ans << endl;

    return 0;
}
