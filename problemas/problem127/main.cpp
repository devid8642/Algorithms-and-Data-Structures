#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    vector<int> v;
    vector<int> psa;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        v.push_back(x);
    }
    
    psa.push_back(v[0]);
    
    for (int i = 1; i < n; i++)
        psa.push_back(psa[i - 1] + v[i]);
        
    for (int i = 0; i < n; i++) {
        if (psa[i] == psa[n - 1] - psa[i]) {
            k = i + 1;
            break;
        }
    }
    
    cout << k << endl;
    
    return 0;
}
