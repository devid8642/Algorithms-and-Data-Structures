#include <iostream>

using namespace std;

int main() {
    int n;
    int cw = 0; int c11 = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int m1, m2;

        cin >> m1 >> m2;

        if (m1 + 1 == m2 || m1 + 2 == m2)
            cw++;
        else if (m1 == 3 || m1 == 4) {
            if (m1 == 3 && (m2 == 4 || m2 == 0))
                cw++;
            else if (m1 == 4 && (m2 == 0 || m2 == 1))
                cw++;
            else
                c11++;
        }
        else
            c11++;
    }

    if (cw > c11)
        cout << "will" << endl;
    else
        cout << "11" << endl;
    
    return 0;

}
