#include <iostream>
using namespace std;

int main() {
	int div[] = { 4,7,47,74,447,474 }, n, n1, n2, n3;
	cin >> n;
	if (n != 1000) {
		n1 = n / 100;
		n2 = n / 10 - n1 * 10;
		n3 = n - n1 * 100 - n2 * 10;
		if (n1 == 4 || n1 == 7 || n1 == 0) {
			if (n2 == 4 || n2 == 7 || (n2 == 0 && n1 == 0)) {
				if (n3 == 4 || n3 == 7) {
					cout << "YES";
					return 0;
				}
			}
		}
	}
	else {
		cout << "YES";
		return 0;
	}

	for (int i = 0; i < 6; i++) {
		if (n%div[i] == 0) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
	return 0;
}