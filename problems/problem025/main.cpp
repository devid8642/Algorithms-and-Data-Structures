#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, c, a1, a2, a3;
    a3 = 4;

    cin >> l >> c;

    a2 = ((l - 1)*2) + ((c - 1)*2);
    a1 = ((l*c - 0.5) - (a2*0.25))/0.5;

    cout << a1 << endl;
    cout << a2 << endl;

    return 0;

}
