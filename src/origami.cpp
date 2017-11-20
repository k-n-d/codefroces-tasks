#include <iostream>
using namespace std;
int main() {
	long long int a, b;
	cin >> a >> b;
	long long int i=1;
	while (true)
	{
		if (a == b) {
			cout << i;
			return 0;
		}
		else if (a%b == 0) {
			cout << a / b + i - 1;
			return 0;
		}
		else if (b%a == 0) {
			cout << b / a + i - 1;
			return 0;
		}
		else if (a >b ) {
			i += a / b;
			a = a%b;
		}
		else if (b > a) {
			i += b / a;
			b = b%a;
		}
	}
}