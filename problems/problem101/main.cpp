#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    if (a < b + c && b < a + c && c < a + b) {
        cout << 'S' << endl;
        
        if (a == b && b == c)
            cout << 3 << endl;
        else if (a != b && b != c && a != c)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else
        cout << 'N' << endl;

    return 0;
}
