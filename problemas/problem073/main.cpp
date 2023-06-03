#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "Informe o número: ";
	cin >> n;


	for (int j = n; j > 0; j--) {
		for (int i = j; i > 0; i--) {
			cout << i << " ";
		}
		cout << endl;
	}

	cout << endl;

	return 0;

}