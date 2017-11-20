#include <iostream>
using namespace std;
int main() {
	int mass;
	cin >> mass;
	if ((mass - 2) % 2 == 0 && (mass - 2) / 2 != 0) cout << "YES"; else cout << "NO";
	return 0;
}