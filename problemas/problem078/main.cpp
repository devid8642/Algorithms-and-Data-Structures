#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, s;
    int cont = 0;
    int pos = 1;
    int posi[105];
    
    cin >> n >> c >> s;
    
    for (int i = 0; i < n; i++)
        posi[i] = i + 1;
    
    if (s == 1)
        cont = 1;
    
    for (int i = 0; i < c; i++) {
        int x;
        
        cin >> x;
        
        if (pos == 1) {
            if (x == 1)
                pos = 2;
            else
                pos = posi[n - 1];    
        }
        else if (pos == posi[n - 1]) {
            if (x == 1)
                pos = 1;
            else
                pos = posi[n - 2];
        }
        else {
            if (x == 1)
                pos = posi[pos];
            else
                pos = posi[pos - 2];
        }
        
        if (pos == s)
            cont++;
    }
    
    cout << cont << endl;
    
    return 0;
}
