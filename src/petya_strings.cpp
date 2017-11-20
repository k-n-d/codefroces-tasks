#include <iostream>
using namespace std;
int main() {
	char str1[100],str2[100];
	cin >> str1 >> str2;
	for (int i = 0; i < 100; i++) {
		if (str1[i] == '\0') break;
		if (str1[i] > 90) str1[i] -= 32;
		if (str2[i] > 90) str2[i] -= 32;
		if (str1[i] > str2[i]) {
			cout << 1;
			return 0;
		}
		else if (str1[i] < str2[i]) {
			cout << -1;
			return 0;
		}
	}
	cout << 0;
	return 0;
}