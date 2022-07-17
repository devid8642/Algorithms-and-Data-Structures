#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    int nums[100000];
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> nums[i];
        
    cin >> k;
    
    int i = 0; int j = n - 1;
    
    while (i < j) {
        if (nums[i] + nums[j] == k)
            break;
        else if (nums[i] + nums[j] < k)
            i++;
        else if (nums[i] + nums[j] > k)
            j--;
    }
    
    cout << nums[i] << " " << nums[j] << endl;

    return 0;
}
