#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, m, l;
    int x;
    
    cin >> s >> m >> l;
    
    x = s + 2*m + 3*l;
    
    if (x >= 10)
        cout << "happy" << endl;
    else
        cout << "sad" << endl;
    
    return 0;
    
}
