#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int resp = 0; double maior = -1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int d, c;
        double tot;

        cin >> d >> c;

        tot = c*log(d);

        if (tot > maior) {
            maior = tot;
            resp = i;
        }
    }

    cout << resp << endl;

    return 0;

}
