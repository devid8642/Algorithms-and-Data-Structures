#include <bits/stdc++.h>

using namespace std;

int main() {
    int nums[3];
    
    for (int i = 0; i < 3; i++)
        cin >> nums[i];
        
    sort(nums, nums + 3);
    
    if (nums[0] == nums[1])
        cout << nums[2] << endl;
    else if (nums[1] == nums[2])
        cout << nums[0] << endl;
    
    return 0;
}
