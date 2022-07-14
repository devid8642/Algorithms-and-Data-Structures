#include <bits/stdc++.h>

using namespace std;

int func(int x, int y) {
    if (x == y)
        return 2*(x + y);
    else if (abs(x - y) == 1)
        return 3*(x + y);
        
    return x + y;
}

int main() {
    int l1, l2, c1, c2;
    int pont_l, pont_c;
    
    cin >> l1 >> l2 >> c1 >> c2;
    
    pont_l = func(l1, l2);
    pont_c = func(c1, c2);
    
    if (pont_l > pont_c)
        cout << "Lia" << endl;
    else if (pont_c > pont_l)
        cout << "Carolina" << endl;
    else
        cout << "empate" << endl;

    return 0;
    
}
