#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int pont_d = 0;
    int pont_x = 0;
    int mapa[] = {0, 1, 2, 3, 4};
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int d, x;
        
        cin >> d >> x;
        
        if (d == 4 && (x == 0 || x == 1))
            pont_d++;
        else if (x == 4 && (d == 0 || d == 1))
            pont_x++;
        else {
            if (mapa[d + 1] == mapa[x] || mapa[d + 2] == mapa[x])
                pont_d++;
            else
                pont_x++;
        }
    }
    
    if (pont_d > pont_x)
        cout << "dario" << endl;
    else
        cout << "xerxes" << endl;

    return 0;
}
