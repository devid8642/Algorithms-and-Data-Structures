#include <bits/stdc++.h>

using namespace std;

int main() {
    int v[10];
    int n;

    for (int i = 0; i < 10; i++)
        cin >> v[i];

    cin >> n;
    sort(v, v + 10);

    int pos = lower_bound(v, v + 10, n) - v;

    if (v[pos] == n)
        cout << "SIM" << endl;
    else
        cout << "NAO" << endl;

    return 0;

}
