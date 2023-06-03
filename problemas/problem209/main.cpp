#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int v[3][3];
    int sum1 = 0; int sum2 = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cin >> v[i][j];
    }

    sum1 = v[0][0] + v[1][1] + v[2][2];
    sum2 = v[0][2] + v[1][1] + v[2][0];

    cout << "Diagonal principal: " << sum1 << endl;
    cout << "Diagonal secundaria: " << sum2 << endl;

    return 0;

}
