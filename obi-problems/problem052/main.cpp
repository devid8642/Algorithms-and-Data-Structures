#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c;
    int tot = 0;
    
    cin >> n >> c;
    
    
    for (int i = 0; i < n; i++) {
        tot += c;
        if (c > 1) {
           c--;
        }
    }
    
    cout << tot << endl;

    return 0;
}
