#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int v[3];
    int t = 0;

    cin >> v[0] >> v[1] >> v[2];

    sort(v, v + 3);

    if (v[1] < v[0] + 200)
        t += v[0] + 200 - v[1];
    if (v[2] < v[1] + 200)
        t += v[1] + 200 - v[2];

    cout << t * 100 << endl;

    return 0;

}
