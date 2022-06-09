#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, d, k, p;
    int ans;
    
    cin >> l >> d;
    cin >> k >> p;
    
    ans = (l * k) + ((l/d)*p);
    
    cout << ans << endl;

    return 0;
}
