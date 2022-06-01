#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int cont = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        if (x != i + 1)
            cont++;
    }
    
    if (cont == 0)
        cout << "Cada mamaco em seu lugar" << endl;
    else
        cout << cont << endl;

    return 0;
}
