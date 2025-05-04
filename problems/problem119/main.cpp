#include <bits/stdc++.h>

using namespace std;

int main() {
    int maior = 0;
    
    while (true) {
        int x;
        
        cin >> x;
        
        if (x == 0)
            break;
        
        if (x > maior)
            maior = x;
    }
    
    cout << maior << endl;
        
    return 0;
}
