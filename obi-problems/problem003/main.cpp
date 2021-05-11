#include <iostream>
#include <string>

using namespace std;

int main() {
	string m;
	int diver = 0, chat = 0;

	getline(cin, m);

	for (int i = 0; i < (int)m.size(); i++) {
		if (i != 0 && i != (int)m.size()-1) {
			if (m[i] == '-' && m[i-1] == ':') {
				if (m[i+1] == ')')
					diver++;
				else if (m[i+1] == '(')
					chat++;
			}
		}
	}

	if (diver > chat)
		cout << "divertido" << endl;
	else if (chat > diver)
		cout << "chateado" << endl;
	else
		cout << "neutro" << endl;

	return 0;
}