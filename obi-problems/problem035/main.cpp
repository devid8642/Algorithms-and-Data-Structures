#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, c;

    cin >> x >> n;

    c = x;

    for (int i = 0; i < n; i++) {
        int m;

        cin >> m;

        x = x - m + c;
    }

    cout << x << endl;

    return 0;

}
