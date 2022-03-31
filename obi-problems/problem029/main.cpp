#include <bits/stdc++.h>

using namespace std;

int main() {
    int ia, ib, fa, fb, cont = 0;

    cin >> ia >> ib >> fa >> fb;

    while (ia != fa || ib != fb) {
        if (ib != fb) {
            if (ib == 0)
                ib = 1;
            else
                ib = 0;
            if (ia == 0)
                ia = 1;
            else
                ia = 0;
            cont++;
        }
        else if (ia != fa) {
            if (ia == 0)
                ia = 1;
            else
                ia = 0;
            cont++;
        }
    }

    cout << cont << endl;

    return 0;

}
