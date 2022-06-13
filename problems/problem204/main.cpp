#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int k;
    int v[10];
    int c = 0; int j = 0;
    int ans[10];

    for (int i = 0; i < 10; i++)
        cin >> v[i];
    cin >> k;

    for (int i = 0; i < 10; i++) {
        if (v[i] == k) {
            c++;
            ans[j] = i;
            j++;
        }
    }

    if (c == 0) {
        cout << "Mia x" << endl;
        return 0;
    }

    cout << c << endl;
    for (int i = 0; i < j; i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;

}
