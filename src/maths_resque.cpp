#include <iostream>
using namespace std;
int main() {
	char str[100];
	int n1 = 0, n2 = 0, n3 = 0;
	cin >> str;
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0') break;
		switch(str[i]){
		case '1':
			n1++;
			break;
		case '2':
			n2++;
			break;
		case '3':
			n3++;
			break;
		}
	}
	for (int i = 0; i < n1; i++) {
		cout << '1';
		if (i != n1-1) cout << '+';
	}
	if (n1!=0 && n2 != 0) cout << '+';
	for (int i = 0; i < n2; i++) {
		cout << '2';
		if (i != n2-1) cout << '+';
	}
	if ((n2 != 0 && n3 != 0) || (n1 != 0 && n2 == 0 && n3 != 0)) cout << '+';
	for (int i = 0; i < n3; i++) {
		cout << '3';
		if (i != n3-1) cout << '+';
	}
	return 0;
}