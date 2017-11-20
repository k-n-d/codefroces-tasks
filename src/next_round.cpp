#include <iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int * results = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> results[i];
	}
	while (results[k-1] == 0) {
		if (k != 1) { 
			k--; 
		}
		else { 
			cout << 0;
			return 0;
		}
	}
	int j=k;
	while (results[j-1] == results[k-1]) j++;
	cout << j-1;
	return 0;
}