#include <bits/stdc++.h>

using namespace std;

int main() {
	int c, n, p, v;
	map<int, int> inst;
	map<int, int> novos;
	map<int, int> resp;
	map<int, int>::iterator it;

	cin >> c >> n;

	for (int i = 0; i < c; i++) {
		cin >> p >> v;
		inst.insert(make_pair(p, v));
	}

	for (int i = 0; i < n; i++) {
		cin >> p >> v;
		if (novos.find(p) == novos.end())
			novos.insert(make_pair(p, v));
		else {
			if (novos[p] < v)
				novos[p] = v;
		}
	}

	for (it = novos.begin(); it != novos.end(); it++) {

		if (inst.find(it->first) == inst.end()) {
			p = it->first;
			v = it->second;
			resp.insert(make_pair(p, v));
		}
		else {
			if (inst[it->first] < novos[it->first]) {
				p = it->first;
				v = it->second;
				resp.insert(make_pair(p, v));
			}
		}

	}

	for (it = resp.begin(); it != resp.end(); it++)
		cout << it->first << " " << it->second;

	cout << "" << endl;


	return 0;
}