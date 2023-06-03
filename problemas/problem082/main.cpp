#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n;
    
    while (true) {
        cin >> b >> n;
        bool ctl = true;
        int bancos[25];
        
        if (b == 0 && n == 0)
            break;
            
        for (int i = 0; i < b; i++)
            cin >> bancos[i];
            
        for (int i = 0; i < n; i++) {
            int d, c, v;
            
            cin >> d >> c >> v;
            
            bancos[d - 1] -= v;
            bancos[c - 1] += v;
        }
        
        sort(bancos, bancos+b);
        
        if (bancos[0] >= 0)
            cout << 'S' << endl;
        else
            cout << 'N' << endl;
            
        
    }

    return 0;
}
