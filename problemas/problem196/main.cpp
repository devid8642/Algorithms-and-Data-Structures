#include <iostream>

using namespace std;

int main() {
    int n;
    int x1 = 0; int x2 = 1;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        if (i == 0)
            cout << i << " ";
        else if (i == 1)
            cout << i << " ";
        else {
            int x3 = x1 + x2;
            cout << x3 << " ";
            x1 = x2;
            x2 = x3;
        }
    }
    cout << endl;

    return 0;

}
