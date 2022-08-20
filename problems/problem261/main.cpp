#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int s, a , b;
    int min = 10001; int max = -1; 

    cin >> s >> a >> b;

    for (int i = a; i <= b; i++) {
        string num = to_string(i);
        int sum = 0;

        for (int j = 0; j < num.size(); j++) {
            int d = num[j] - '0';
            sum += d;    
        }

        if (sum == s) {
            if (i > max)
                max = i;
            if (i < min)
                min = i;
        }
    }

    cout << min << endl;
    cout << max << endl;

    return 0;

}
