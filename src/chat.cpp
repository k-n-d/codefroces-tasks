#include <iostream>
using namespace std;

int main() {
	char str[100], word[] = "hello";
	int k = 0;
	cin >> str;
	for (int i = 0; i < 100; i++) {
		if (str[i] == 0) break;
		if (str[i] == word[k]) {
			k++;
			if (word[k] == 0) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}