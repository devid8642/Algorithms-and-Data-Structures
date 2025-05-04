#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
    if (a == 0)
        return b;
    return mdc(b % a, a);
}

int main() {
    int n;
    queue<int> lista;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        lista.push(x);
    }
    
    while (!lista.empty()) {
        if (lista.size() >= 2) {
            int x = lista.front();
            lista.pop();
            int y = lista.front();
            lista.pop();
            int z = mdc(x, y);
            lista.push(z);
        }
        else {
            cout << lista.front() << endl;
            return 0;
        }
    }
    
    return 0;
}
