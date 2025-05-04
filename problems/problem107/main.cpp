#include <bits/stdc++.h>

using namespace std;

int main() {
    double l, m;

    cin >> l >> m;

    l = 30 * l/100;

    if (l < m)
        cout << 0 << endl;
    else
        cout << floor(l) << endl;

    return 0;

}
