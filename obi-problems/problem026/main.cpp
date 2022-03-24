#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, food = 0;
    char tabu[105][105];
    vector<int> comida;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tabu[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                if (tabu[i][j] == 'o')
                    food++;
                else if (tabu[i][j] == 'A') {
                    comida.push_back(food);
                    food = 0;
                }
            }
        }
        else {
            for (int j = n - 1; j > -1; j--) {
                if (tabu[i][j] == 'o')
                    food++;
                else if (tabu[i][j] == 'A') {
                    comida.push_back(food);
                    food = 0;
                }
            }
        }
    }
    
    comida.push_back(food);

    sort(comida.rbegin(), comida.rend());

    cout << comida[0] << endl;

    return 0;

}
