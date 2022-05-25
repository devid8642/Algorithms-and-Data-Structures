#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    char mapa[1005][1005];
    int cont = 0;
    
    cin >> m>> n;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mapa[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mapa[i][j] == '#' && (i == 0 || i == m - 1 || j == 0 || j == n - 1)) {
                cont++;
                continue;
            }
            if (mapa[i][j] == '#') {
                bool ctl = false;
                if (i != 0) {
                    if (mapa[i - 1][j] == '.')
                        ctl = true;
                }
                if (i != m - 1) {
                    if (mapa[i + 1][j] == '.')
                        ctl = true;
                }
                if (j != 0) {
                    if (mapa[i][j - 1] == '.')
                        ctl = true;
                }
                if (j != n - 1) {
                    if (mapa[i][j + 1] == '.')
                        ctl = true;
                }
                if (ctl)
                    cont++;
            }
        }
    }
    
    cout << cont << endl;

    return 0;
}
