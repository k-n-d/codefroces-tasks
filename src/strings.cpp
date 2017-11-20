#include <iostream>
using namespace std;
int main() {
	char str[100],strOut[200],vowels[7]="AEIOUY";
	int numOfConsec=1,k=0;
	bool vowel=false;
	cin >> str;
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0') break;
		for (int j = 0; j < 6; j++) {
			if (str[i] == vowels[j] || str[i] == vowels[j]+32) {
				vowel = true;
			}
		}
		if (!(vowel)) {
			if (str[i] <= 90) str[i] += 32;
			strOut[k] = '.';
			strOut[k + 1] = str[i];
			k += 2;
		}
		vowel = false;
	}
	int i = 0;
	for (int i = 0; i < k; i++) {
		cout << strOut[i];
	}
	return 0;
}