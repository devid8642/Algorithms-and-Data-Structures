#include <bits/stdc++.h>

using namespace std;

int main() {
    int c1, c2, c3, f1, f2, f3;
    int p1 = 0; int p2 = 0;
    
    cin >> c1 >> c2 >> c3 >> f1 >> f2 >> f3;
    
    p1 = 3*c1 + c2;
    p2 = 3*f1 + f2;
    
    if (p1 > p2)
        cout << 'C' << endl;
    else if (p2 > p1)
        cout << 'F' << endl;
    else {
        if (c3 > f3)
            cout << 'C' << endl;
        else if (f3 > c3)
            cout << 'F' << endl;
        else
            cout << '=' << endl;
    }
    
    return 0;
    
}
