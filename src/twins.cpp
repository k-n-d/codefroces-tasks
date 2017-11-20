#include <iostream>
using namespace std;

int sum(int size, int* arr) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		temp += arr[i];
	}
	return temp;
}

void sort(int size, int* arr) {
	bool sorted = false;
	int temp;
	while (!sorted) {
		sorted = true;
		for (int i = 1; i < size; i++){
			if (arr[i-1] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
				sorted = false;
			}
		}
	}
}

int main() {
	int n, val[100], mySum, half, toTake = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> val[i];
	}
	mySum = sum(n, val);
	half = mySum / 2 + 1;
	sort(n, val);
	for (int i = 0; i < n; i++) {
		toTake += val[i];
		if (toTake >= half) {
			cout << i + 1;
			return 0;
		}
	}
	cout << n;
	return 0;
}