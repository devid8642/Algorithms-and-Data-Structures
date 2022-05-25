#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, h, l;
    
    cin >> a >> b >> c >> h >> l;
    
    if (a <= h && b <= l || b <= h && a <= l) {
        cout << 'S' << endl;
        return 0;
    }
    else if (b <= h && c <= l || c <= h && b <= l) {
        cout << 'S' << endl;
        return 0;
    }
    else if (a <= h && c <= l || c <= h && a <= l) {
        cout << 'S' << endl;
        return 0;
    }
        
    cout << 'N' << endl;

    return 0;
}
