#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	string my_input;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> my_input;
		if (my_input.size() > 10) cout << my_input.front() << my_input.size() - 2 << my_input.back() << endl; else cout << my_input << endl;
	}
	return 0;
}