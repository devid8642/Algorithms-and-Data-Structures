#include <bits/stdc++.h>

using namespace std;

bool func(int a, int b) {
    return a > b;
}

int main() {
    int n;
    int nums[13];
    int aux[13];
    memset(nums, 0, sizeof nums);
    memset(aux, 0, sizeof aux);
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        nums[x]++;
        aux[x]++;
    }
    
    sort(aux, aux + 13, func);
    
    for (int i = 1; i <= 12; i++) {
        if (nums[i] == aux[0])
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
