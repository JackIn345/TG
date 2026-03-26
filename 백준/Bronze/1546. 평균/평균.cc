#include <iostream>

using namespace std;

int main(void)
{
	double jumsu, total, m;
	int n;
	total = 0;
	m = 0;
	cin >> n;
	for (int i = 0;i < n; i++) {
		cin >> jumsu;
		if (jumsu >= m) {
			m = jumsu;
		}
		total += jumsu;
	}
	total = total / m * 100;
	cout << total / (double)n;
}