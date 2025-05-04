#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    string num;
    int sum1 = 0; int sum2 = 0;

    cin >> num;

    for (int i = 0; i < (int)num.size(); i++) {
        int alg = num[i] - '0';

        if ((i + 1) % 2 == 0)
            sum1 += alg;
        else
            sum2 += alg;
    }

    if ((sum2 - sum1) % 11 == 0)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;

}
