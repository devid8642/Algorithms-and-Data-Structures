#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, n;

    cin >> v >> n;

    double tot = n*v;

    for (double i = 1; i <= 9; i++) {
        double placas = ceil((i/10) * tot);

        cout << int(placas) << " ";
    }

    cout << endl;

    return 0;

}
