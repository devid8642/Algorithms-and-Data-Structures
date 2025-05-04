#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, d;
    int cont = 0;
    
    cin >> n;
    cin >> a >> d;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        if (abs(x - a) <= d)
            cont++;
    }
    
    cout << cont << endl;

    return 0;
}
