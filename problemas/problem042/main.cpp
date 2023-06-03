#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    
    cin >> x >> y;
    
    if (x == 0 || y == 0)
        cout << "eixos" << endl;
    else if (x > 0 && y > 0)
        cout << "Q1" << endl;
    else if (x > 0 && y < 0)
        cout << "Q4" << endl;
    else if (x < 0 && y > 0)
        cout << "Q2" << endl;
    else if (x < 0 && y < 0)
        cout << "Q3" << endl;
    return 0;
}
