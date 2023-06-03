#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, x, y;
    
    cin >> a >> b >> x >> y;
    
    if (a*b > x*y)
        cout << a*b << endl;
    else
        cout << x*y << endl;
    
    return 0;
}
