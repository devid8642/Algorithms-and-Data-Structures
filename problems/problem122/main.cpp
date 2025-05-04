#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    vector<char> vog;
    vector<char> cons;
    
    cin >> str;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i')
            vog.push_back(str[i]);
        else
            cons.push_back(str[i]);
    }
    
    cout << "Vogais: ";    
    for (int i = 0; i < vog.size(); i++)
        cout << vog[i];
    cout << endl;
    
    cout << "Consoantes: ";
    for(int i = 0; i < cons.size(); i++)
        cout << cons[i];
    cout << endl;
        
    return 0;
}
