#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r, d;
    
    cin >> l >> r >> d;
    
    if (r > 50 && r > l && r > d)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;
}
