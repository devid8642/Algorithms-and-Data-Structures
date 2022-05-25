#include <bits/stdc++.h>

using namespace std;

int main() {
    int cont = 0;
    
    while (true) {
        int x;
        
        cin >> x;
        
        if (x != 2018)
            cont++;
        else
            break;
    }
    
    cout << cont << endl;
    
    return 0;
}
