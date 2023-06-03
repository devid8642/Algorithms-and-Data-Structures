#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    vector<int> v;
    
    cin >> s;
    
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] != '+') {
            int x = s[i] - '0';
            v.push_back(x);
        }    
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < (int)v.size(); i++) {
        if (i != (int)v.size() - 1)
            cout << v[i] << "+";
        else
            cout << v[i];
    }
    cout << endl;

    return 0;
}
