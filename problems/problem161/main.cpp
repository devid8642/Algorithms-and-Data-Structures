#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    vector<int> v;
    
    cin >> a >> b >> c >> d;
    
    v.push_back(abs((a + b) - (c + d)));
    v.push_back(abs((a + c) - (b + d)));
    v.push_back(abs((a + d) - (c + b)));
    v.push_back(abs((a + b) - (c + d)));
    
    sort(v.begin(), v.end());
    
    cout << v[0] << endl;

    return 0;
}
