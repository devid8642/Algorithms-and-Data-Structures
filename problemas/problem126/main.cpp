#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int cont1 = 0; int cont2 = 0;
    int cont3 = 0; int cont4 = 0; int cont5 = 0;
    int ans1 = 0; int ans2 = 0; int ans3 = 0; 
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        if (x == 1)
            cont1++;
        else if (x == 2)
            cont2++;
        else if (x == 3)
            cont3++;
        else if (x == 4)
            cont4++;
        else if (x == 5)
            cont5++;
            
        if (cont5 != 0 && cont3 != 0 && cont1 != 0) {
            ans1++;
            cont5--;
            cont3--;
            cont1--;
        }
        else if (cont1 != 0 && cont4 != 0) {
            ans2++;
            cont1--;
            cont4--;
        }
        else if (cont2 != 0 && cont4 != 0) {
            ans3++;
            cont2--;
            cont4--;
        }
    }
    
    cout << "A: " << ans1 << endl;
    cout << "B: " << ans2 << endl;
    cout << "C: " << ans3 << endl;

    return 0;
}
