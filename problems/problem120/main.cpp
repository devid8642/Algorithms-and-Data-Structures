#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int subs = 0; int conser = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        if (x < 50)
            subs++;
        else if (x < 85)
            conser++;
        
    }
    
    cout << subs << " " << conser << endl;
        
    return 0;
}
