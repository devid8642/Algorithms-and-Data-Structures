#include <bits/stdc++.h>

using namespace std;

int main() {
    int d;
    
    cin >> d;
    
    if (d <= 800)
        cout << 1 << endl;
    else if (d > 800 && d <= 1400)
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}
