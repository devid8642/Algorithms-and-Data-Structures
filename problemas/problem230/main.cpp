#include <bits/stdc++.h>

using namespace std;

int main() {
    int c;
    int ans = 0;
    string in;
    
    cin >> c >> in;
    
    for (int i = 0; i < c; i++) {
        char l = in[i];
        
        if (l == 'P' || l == 'C')
            ans += 2;
        else if (l == 'A')
            ans += 1;
    }
    
    cout << ans << endl;
    
    return 0;
}
