#include <iostream>

using namespace std;

int main(void)
{
	int n, num, max, min;

	cin >> n;
	cin >> num;
	max = num;
	min = num;
	for (int i = 1; i < n; i++) {
		cin >> num;
		if (num <= min) {
			min = num;
		}
		else if (num > max) {
			max = num;
		}
	}
	cout << min << " " << max;
}