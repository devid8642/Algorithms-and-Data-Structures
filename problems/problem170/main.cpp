#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> ans;
	int h1, m1, h2, m2;
	
	while (true) {
		
		cin >> h1 >> m1;
		cin >> h2 >> m2;
		
		if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
			break;
		
	    if (h1 < h2)
	        ans.push_back(abs((h1*60 + m1) - (h2*60 + m2)));
	    else {
	        if (h1 > h2 || m1 > m2) {
	            int tmp = (23 - h1)*60 + 60 - m1;
	            ans.push_back(tmp + h2*60 + m2);
	        }
	        else
	           ans.push_back(m2 - m1);
	    }
	}
	
	for (int i = 0; i < (int)ans.size(); i++)
		cout << ans[i] << endl;
	
	return 0;
	
}
