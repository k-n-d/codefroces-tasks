#include <iostream>
using namespace std;

int main() {
	char str[100];
	int k = 0;
	bool dupl;
	cin >> str;
	for (int i = 0; i < 100; i++) {
		if (str[i] == 0) break;
		dupl = false;
		for (int j = 0; j < i; j++) {
			if (str[i] == str[j]) {
				dupl = true;
				break;
			}
		}
		if (!dupl) k++;
	}
	if (k % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
	return 0;
}