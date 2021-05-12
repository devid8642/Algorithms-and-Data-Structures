#include <iostream>
#include <set>

using namespace std;

int main() {
	int n, m, i, r, a, id;
	set<int> infec;
	set<int> partic;
	set<int>::iterator it;

	cin >> n >> m;
	cin >> i >> r;

	infec.insert(i);

	for (int i = 0; i < m; i++) {
		cin >> a;

		for (int j = 0; j < a; j++) {
			cin >> id;
			partic.insert(id);
		}

		if ((i+1) >= r) {
			bool ok = false;
			for (it = partic.begin(); it != partic.end(); it++) {
				if (infec.find(*it) != infec.end()) {
					ok = true;
					break;
				}
			}
			if (ok) {
				for (it = partic.begin(); it != partic.end(); it++)
					infec.insert(*it);
			}
		}

		partic.clear();
	}

	cout << infec.size() << endl;

	return 0;
}