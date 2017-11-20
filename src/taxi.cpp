#include <iostream>
using namespace std;
int main() {
	long int n,n1=0,n2=0,n3=0,n4=0,n1_out;
	int temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		switch (temp) {
		case 1:
			n1++;
			break;
		case 2:
			n2++;
			break;
		case 3:
			n3++;
			break;
		case 4:
			n4++;
		}
	}

	n1_out = n1 - n3 - (n2 % 2) * 2;
	if (n1_out < 0) {
		n1_out = 0;
	}
	cout << n4 + n3 + n2 / 2 + n2 % 2 + n1_out / 4 + (n1_out % 4 == 0 ? 0 : 1);
	return 0;
}