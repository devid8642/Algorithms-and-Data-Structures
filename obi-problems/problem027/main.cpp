#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, a;

    cin >> n >> d >> a;

    if (d >= a)
        cout << d - a << endl;
    else
        cout << (n - a) + d << endl;

    return 0;

}
