#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    int i;
    int ans = 1;

    cin >> x;

    if (x == 0) {
        cout << 0 << endl;
        return 0;
    }

    for (i = 8; i < x; i += 8)
        ans++;

    cout << ans << endl;

    return 0;

}
