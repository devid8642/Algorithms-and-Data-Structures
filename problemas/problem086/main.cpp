#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<int, int>> nums1;
    vector<int> nums2;
    vector<int> ans;
    vector<int> pos;
    
    for (int i = 0; i < 10; i++) {
        int x;
        
        cin >> x;
        
        nums1.push_back({x, i});
        nums2.push_back(x);
    }
    
    sort(nums1.begin(), nums1.end());
    
    cout << "Menor: " << nums1[0].first << endl;
    
    for (int i = 0; i < 10; i++) {
        if (nums1[0].first == nums2[i]) {
            nums2[i] = -1;
            pos.push_back(i);
        }
    }
    
    cout << "Ocorrencias: ";
    
    for (int i = 0; i < pos.size(); i++)
        cout << pos[i] << " ";
    cout << endl;
    
    for (int i = 0; i < 10; i++)
        cout << nums2[i] << " ";
    cout << endl;
    return 0;
}
