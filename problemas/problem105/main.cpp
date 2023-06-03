#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	cin >> a >> b;
	
	cout << a - b << endl;
	
	if (a - b >= 18 && a - b <= 67)
		cout << "Pode doar sangue" << endl;
	else
		cout << "Nao pode doar sangue" << endl;
	
	return 0;
	
}
