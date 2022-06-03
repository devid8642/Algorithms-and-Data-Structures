#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;  int cont2 = 0; int cont3 = 0; int cont4 = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        if (x % 2 == 0)
            cont2++;
        if (x % 3 == 0)
            cont3++;
        if (x % 4 == 0)
            cont4++;
    }
    
    cout << cont2 << endl;
    cout << cont3 << endl;
    cout << cont4 << endl;
    
    return 0;
}
