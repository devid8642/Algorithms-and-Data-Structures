#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, t;
    int mod[1005];
    
    cin >> v >> t;
    
    for (int i = 0; i < t; i++)
        cin >> mod[i];
        
    for (int i = 0; i < t; i++) {
        int x = mod[i];
        
        if (x >= 0) {
            v += x;
            if (v >= 100)
                v = 100;
        }
        else {
            v -= abs(x);
            if (v <= 0)
                v = 0;
        }
    }
    
    cout << v << endl;
    
    return 0;
    
}
