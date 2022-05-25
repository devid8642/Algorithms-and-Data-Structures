#include <bits/stdc++.h>

using namespace std;

int main() {
    int nums[3];
    
    for (int i = 0; i < 3; i++)
        cin >> nums[i];
        
    if (nums[0] - nums[1] == 0 || nums[1] - nums[2] == 0 || nums[0] - nums[2] == 0)
        cout << "S" << endl;
    else if ((nums[0] + nums[1]) - nums[2] == 0 || (nums[1] + nums[2]) - nums[0] == 0 || (nums[0] + nums[2]) - nums[1] == 0)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
