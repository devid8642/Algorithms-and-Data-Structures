#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    int v[3];
    
    cin >> a >> b >> c;
    
    v[0] = b*2 + c*4;
    v[1] = a*2 + c*2;
    v[2] = b*2 + a*4;
    
    sort(v, v + 3);
    
    cout << v[0] << endl;
    
    return 0;
}
