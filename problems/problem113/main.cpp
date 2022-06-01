#include <bits/stdc++.h>

using namespace std;

int main() {
    int v[3];
    
    cin >> v[0] >> v[1] >> v[2];
    
    sort(v, v + 3);
    
    if (v[0] == v[1])
        cout << v[0] << endl;
    else
        cout << v[2] << endl;

    return 0;
}
