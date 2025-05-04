#include <bits/stdc++.h>

using namespace std;

int main() {
    int tabu[1005][1005];
    int l, c;
    
    cin >> l >> c;
    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (j == 0) {
                if (i % 2 == 0)
                    tabu[i][j] = 1;
                else
                    tabu[i][j] = 0;
            }
            else {
                if (tabu[i][j - 1] == 1)
                    tabu[i][j] = 0;
                else
                    tabu[i][j] = 1;
            }
        }
    }
    
    cout << tabu[l - 1][c - 1] << endl;

    return 0;
}
