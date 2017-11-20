#include <iostream>
using namespace std;
int main() {
	int n,x=0;
	char str[4];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str[1] == '+') {
			x++;
		}
		else {
			x--;
		}
	}
	cout << x;
	return 0;
}