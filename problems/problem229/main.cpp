#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n, s; int ans = 0;
    int arr[100005];
    int prefix[100005];

    cin >> n >> s;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    for (int i = 0; i < n; i++) {
        int k = i - 1;
        if (i == 0)
            int k = 0;
        
        int j =  lower_bound(prefix + i, prefix + n, s + prefix[k]) - prefix;

        while (j != n) {
            if (prefix[j] - prefix[k] == s) {
                j++;
                ans++;
            }
            else
                break;
        }
    }

    cout << ans << endl;

    return 0;

}
