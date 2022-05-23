#include <bits/stdc++.h>

using namespace std;

int main() {
    int nums[8];
    bool ctl = true;

    for (int i = 0; i < 8; i++)
        cin >> nums[i];

    for (int i = 0; i < 8; i++) {
        int cont = 0;
        for (int j = 0; j < 8; j++) {
            if (nums[i] == nums[j])
                cont++;
        }

        if (cont > 4) {
            ctl = false;
            break;
        }
    }

    if (ctl)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;

}
