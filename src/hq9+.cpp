#include <iostream>
using namespace std;
int main() {
	char str[100], syntax[] = "HQ9";
	int i = 0;
	cin >> str;
	while (str[i] != 0) {
		for (int j = 0; j < 3; j++) {
			if (str[i] == syntax[j]) {
				cout << "YES";
				return 0;
			}
		}
		i++;
		if (i > 99) break;
	}
	cout << "NO";
	return 0;
}