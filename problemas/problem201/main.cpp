#include <iostream>

using namespace std;

int main() {
    int n, k;
    int v[100000];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cin >> k;

    int l = 0; int r = n - 1;

    while (l < r) {
        int sum = v[l] + v[r];

        if (sum > k)
            r--;
        else if (sum < k)
            l++;
        else {
            cout << v[l] << " " << v[r] << endl;
            return 0;
        }
    }

    return 0;

}
