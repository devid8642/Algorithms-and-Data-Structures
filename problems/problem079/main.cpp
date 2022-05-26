#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s;
    
    int menor;
    
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        s += x;
        
        if (i == 0)
            menor = s;
        else if (s < menor)
            menor = s;
    }
    
    cout << menor << endl;
    
    return 0;
}
