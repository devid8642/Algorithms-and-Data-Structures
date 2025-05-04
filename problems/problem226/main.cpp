#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, c, la, ca;
    char mapa[105][105];
    
    cin >> l >> c;
    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mapa[i][j];
            
            if (mapa[i][j] == 'o') {
                la = i;
                ca = j;
            }
        }
    }
    
    while (true) {
        if (la != 0) {
            if (mapa[la - 1][ca] == 'H') {
                if (mapa[la][ca] != 'o')
                    mapa[la][ca] = '.';
                la--;
                continue;
            }
        }
        if (la != l - 1) {
            if (mapa[la + 1][ca] == 'H') {
                if (mapa[la][ca] != 'o')
                    mapa[la][ca] = '.';
                la++;
                continue;
            }
        }
        
        if (ca != 0) {
            if (mapa[la][ca - 1] == 'H') {
                if (mapa[la][ca] != 'o')
                    mapa[la][ca] = '.';
                ca--;
                continue;
            }
        }
        if (ca != c - 1) {
            if (mapa[la][ca + 1] == 'H') {
                if (mapa[la][ca] != 'o')
                    mapa[la][ca] = '.';
                ca++;
                continue;
            }
        }
        
        break;
    }
    
    
    cout << ++la << " " << ++ca << endl;

    return 0;
}
