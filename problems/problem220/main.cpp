#include <bits/stdc++.h>

using namespace std;

bool func(int a, int b) {
    return a > b;
}

int main() {
    int nums[10];
    
    for (int i = 0; i < 10; i++)
        cin >> nums[i];
        
    sort(nums, nums + 10);
    
    for (int i = 0; i < 10; i++)
        cout << nums[i] << " ";
    cout << endl;
    
    sort(nums, nums + 10, func);
    
    for (int i = 0; i < 10; i++)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}
