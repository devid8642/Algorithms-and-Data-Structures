#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    string v[105];
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
        
    sort(v, v + n);
    
    cout << v[k - 1] << endl;

    return 0;
}
