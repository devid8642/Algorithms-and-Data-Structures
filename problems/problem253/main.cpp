#include <bits/stdc++.h>

using namespace std;

int dist(int x1, int y1, int x2, int y2) {
    return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}

int main() {
    int n;
    int sum = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x1, x2, y1, y2;
        
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        
        sum += dist(x1, y1, x2, y2);
    }
    
    cout << sum << endl;
    
    return 0;
}
