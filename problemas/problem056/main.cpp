#include <bits/stdc++.h>

using namespace std;

int main() {
    string num;
    vector<char> ans;
    
    cin >> num;
    
    for (int i = 0; i < num.size(); i++) {
        if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C')
            ans.push_back('2');
        else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F')
            ans.push_back('3');
        else if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I')
            ans.push_back('4');
        else if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L')
            ans.push_back('5');
        else if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O')
            ans.push_back('6');
        else if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S')
            ans.push_back('7');
        else if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V')
            ans.push_back('8');
        else if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z')
            ans.push_back('9');
        else
            ans.push_back(num[i]);
    }
    
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i];
    cout << endl;
    
    return 0;
}
