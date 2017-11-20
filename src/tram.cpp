#include <iostream>
using namespace std;
int main() {
	int n, in, out, psgrs = 0, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> out >> in;
		psgrs = psgrs - out + in;
		if (psgrs > max) max = psgrs;
	}
	cout << max;
	return 0;
}