#include <iostream>
using namespace std;
int main() {
	long int n, m, a;
	cin >> n >> m >> a;
	long long int n_count, m_count;
	if (n%a == 0) n_count = n / a; else n_count = n / a + 1;
	if (m%a == 0) m_count = m / a; else m_count = m / a + 1;
	cout << n_count*m_count;
	return 0;
}