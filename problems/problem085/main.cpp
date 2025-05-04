#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    
    cin >> x >> y;
    
    if (x > 432 || y > 468)
        cout << "fora" << endl;
    else if (x < 0 || y < 0)
        cout << "fora" << endl;
    else
        cout << "dentro" << endl;
    
    return 0;
}
