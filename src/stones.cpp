#include <iostream>
using namespace std;
int main() {
	int n, rem = 0;
	char str[50], lastCol;
	cin >> n >> str;
	lastCol = str[0];
	for (int i = 1; i < n; i++) {
		if (str[i] == lastCol) {
			rem++;
		}
		else {
			lastCol = str[i];
		}
	}
	cout << rem;
	return 0;
}