#include <bits/stdc++.h>

using namespace std;

int main() {
    bool ctl = true;
    int n; int maior;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;

        cin >> x;

        if (i == 0)
            maior = x;
        else if (x > maior)
            ctl = false;
    }

    if (ctl)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;


    return 0;

}
