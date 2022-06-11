#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int ans = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string num;
        int numb = 0;

        cin >> num;

        int pot = num[num.size() - 1] - '0';

        int c = num.size() - 2;

        for (int j = 0; j < num.size() - 1; j++) {
            int dig = num[j] - '0';
            numb += dig*pow(10, c);
            c--;
        }

        ans += pow(numb, pot);
    }

    cout << ans << endl;

    return 0;

}
