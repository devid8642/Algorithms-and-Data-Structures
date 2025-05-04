#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n;
    int maior, menor;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;

        cin >> x;

        if (i == 0) {
            maior = x; 
            menor = x;
        }
        else {
            if (x > maior)
                maior = x;
            if (x < menor)
                menor = x;
        }
    }

    cout << maior << endl;
    cout << menor << endl;

    return 0;

}
