#include <bits/stdc++.h>

using namespace std;

int main() {
   int nums[4];
   bool ctl = false;
   
   for (int i = 0; i < 4; i++)
    cin >> nums[i];
    
    for (int i = 1; i < 3; i++) {
        
        if (nums[i-1] == nums[i+1])
            ctl = true;
    }
    
    if (ctl)
        cout << 'V' << endl;
    else
        cout << 'F' << endl;
    return 0;
}
