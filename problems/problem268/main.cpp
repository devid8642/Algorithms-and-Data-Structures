#include <bits/stdc++.h>

using namespace std;

int main() {
    int v; int i = 0;
    int arr[1000007];
    
    while (cin >> v) {
        arr[i] = v;
        i++;
    }
    
    sort(arr, arr + i);
    
    cout << "Apesar de muitas moedinhas o maior produto encontrado foi " << arr[i - 1] * arr[i - 2] << endl;

    return 0;
}
