#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int v[8];
    int qua[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cin >> qua[i][j];
    }

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += qua[i][j];
        v[i] = sum;
    }

    int k = 3;

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += qua[j][i];
        v[k] = sum;
        k++;
    }

    v[6] = 0; v[7] = 0;

    for (int i = 0; i < 3; i++)
        v[6] += qua[i][i];

    for (int i = 2; i >= 0; i--)
        v[7] += qua[i][i];

    for (int i = 0; i < 7; i++) {
        if (v[i] != v[i + 1]) {
            cout << "NAO" << endl;
            return 0;
        }
    }

    cout << "SIM" << endl;

    return 0;

}
