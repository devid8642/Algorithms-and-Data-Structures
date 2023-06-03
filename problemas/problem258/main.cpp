#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int r, m, l;

    cin >> r >> m >> l;

    if (r < m)
        cout << "RM" << endl;
    else
        cout << '*' << endl;

    if (r < l)
        cout << "RO" << endl;
    else
        cout << '*' << endl;

    return 0;

}
