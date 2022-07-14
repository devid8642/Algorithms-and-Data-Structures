#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n, m;
    int mapa[1005][1005];
    int x, y, num, sala, i2, j2;
    int ans = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;

            cin >> k;

            if (k == 3) {
                i2 = i;
                j2 = j;
            }

            mapa[i][j] = k;
        }
    }

    sala = mapa[i2][j2];
    x = i2; 
    y = j2;

    while (sala != 2) {
        if (sala == 3 || sala == 1)
            ans++;

        if (x != 0) {
            if (mapa[x - 1][y] == 1) {
                mapa[x][y] = 0;
                x--;
                sala = mapa[x][y];
                continue;
            }
            else if (mapa[x - 1][y] == 2) {
                ans++;
                sala = mapa[x - 1][y];
                continue;
            }
        }
        if (x != n - 1) {
            if (mapa[x + 1][y] == 1) {
                mapa[x][y] = 0;
                x++;
                sala = mapa[x][y];
                continue;
            }
            else if (mapa[x + 1][y] == 2) {
                ans++;
                sala = mapa[x + 1][y];
                continue;
            }
        }

        if (y != 0) {
            if (mapa[x][y - 1] == 1) {
                mapa[x][y] = 0;
                y--;
                sala = mapa[x][y];
                continue;
            }
            else if (mapa[x][y - 1] == 2) {
                ans++;
                sala = mapa[x][y - 1];
                continue;
            }
        }
        if (y != m - 1) {
            if (mapa[x][y + 1] == 1) {
                mapa[x][y] = 0;
                y++;
                sala = mapa[x][y];
                continue;
            }
            else if (mapa[x][y + 1] == 2) {
                ans++;
                sala = mapa[x][y + 1];
                continue;
            }
        }
        mapa[i2][j2] = 3;
        sala = mapa[i2][j2];
        x = i2;
        y = j2;
        ans = 0;
    }

    cout << ans << endl;

    return 0;

}
