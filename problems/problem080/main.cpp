#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, p, f;
    
    cin >> c >> p >> f;
    
    if (f*c > p)
        cout << 'N' << endl;
    else
        cout << 'S' << endl;

    return 0;
}
