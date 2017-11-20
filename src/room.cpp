#include <iostream>
using namespace std;

int main() {
	int n, live, cap, rooms = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> live >> cap;
		if ((cap - live) >= 2) {
			rooms++;
		}
	}
	cout << rooms;
	return 0;
}