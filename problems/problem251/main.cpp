#include <bits/stdc++.h>

using namespace std;

int fat(int x) {
    if (x == 1)
        return x;
        
    return x*fat(x - 1);
}

int main() {
    int n; int sum = 0;
    vector<vector<int>> arr;
    vector<int> ans;
    
    cin >> n;
    
    int f = fat(n);
    int f2 = fat(n - 1);
    
    for (int i = 1; i <= n; i++)
        sum += i*f2;
        
    for (int i = 0; i < f - 1; i++) {
        vector<int> tmp;
        for (int j = 0; j < n; j++) {
            int x;
            
            cin >> x;
            
            tmp.push_back(x);
        }
        arr.push_back(tmp);
    }
    
    for (int i = 0; i < n; i++) {
        int aux = sum;
        for (int j = 0; j < f - 1; j++)
            aux -= arr[j][i];
            
        ans.push_back(aux);
    }
    
    for (int i = 0; i < (int)ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}
