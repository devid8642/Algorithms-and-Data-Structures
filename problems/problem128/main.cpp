#include <bits/stdc++.h>

using namespace std;

int n, f;
char mapa[505][505];

void floodFill(int i, int j) {
    if (i < 0 || i == n || j < 0 || j == n || mapa[i][j] - '0' > f || mapa[i][j] == '*')
        return;
        
    mapa[i][j] = '*';
    
    floodFill(i - 1, j);
    floodFill(i + 1, j);
    floodFill(i, j - 1);
    floodFill(i, j + 1);
}

int main() {
    
    cin >> n >> f;
    
    for (int i = 0; i < n; i++) {
        string s;
        
        cin >> s;
        
        for (int j = 0; j < s.size(); j++)
            mapa[i][j] = s[j];
    }
    
    floodFill(0, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mapa[i][j];
        cout << endl;
    }

    return 0;
}
