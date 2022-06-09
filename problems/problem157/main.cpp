#include <bits/stdc++.h>

using namespace std;

int main() {
    int d1, h1, m1;
    int d2, h2, m2;
    
    cin >> d1 >> h1 >> m1;
    cin >> d2 >> h2 >> m2;
    
    cout << (d2*24*60*60 + h2*60*60 + m2*60) - (d1*24*60*60 + h1*60*60 + m1*60) << endl;
    
    return 0;
}
