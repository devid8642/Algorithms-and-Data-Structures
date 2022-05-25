#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<int, int>> nums;
    for (int i = 0; i < 3; i++) {
        int x;
        
        cin >> x;
        
        nums.push_back({x, i+1});
        
    }
    
    sort(nums.begin(), nums.end());
        
    
    for (int i = 0; i < 3; i++)
        cout << nums[i].second << endl;
    
    return 0;
}
