#include <bits/stdc++.h>

using namespace std;

int main() {
    char matriz[505][505];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == '.') {
                if (i != 0)
                    if (matriz[i-1][j] == 'o') matriz[i][j] = 'o';
                if (j != 0 && i != n - 1) {
                    if (matriz[i][j-1] == 'o' && matriz[i+1][j-1] == '#')
                        matriz[i][j] = 'o';
                }
                if (j != m-1 && i != n-1) {
                    if (matriz[i][j+1] == 'o' && matriz[i+1][j+1] == '#')
                        matriz[i][j] = 'o';
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j];
        }
        cout << endl;
    }

    return 0;

}
