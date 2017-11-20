#include <iostream>
using namespace std;
int main() {
	char str[100],lastChar;
	int numOfConsec=1;
	cin >> str;
	lastChar = str[0];
	for (int i = 1; i < 100; i++) {
		if (str[i] == '\0') break;
		if (str[i] == lastChar) {
			numOfConsec++;
		}
		else {
			numOfConsec = 1;
			lastChar = str[i];
		}
		if (numOfConsec == 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}