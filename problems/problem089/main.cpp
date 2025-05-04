#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    
    cin >> a >> b;
    
    if (a == b) {
        cout << 4*a << endl;
        cout << "Quadrado" << endl;
    }
    else {
        cout << 2*a + 2*b << endl;
        cout << "Retangulo" << endl;
    }
    
    return 0;
    
}
