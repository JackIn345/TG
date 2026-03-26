#include <iostream>

using namespace std;

int main(void)
{
	int n, m, i, j, temp;
	cin >> n;
	cin >> m;
	int* array = new int[n];
	for (int k = 0; k < n; k++) {
		array[k] = k + 1;
	}
	for (int k = 0; k < m; k++) {
		cin >> i;
		cin >> j;
		temp = array[i - 1];
		array[i - 1] = array[j - 1];
		array[j - 1] = temp;
	}
	for (int k = 0; k < n; k++) {
		cout << array[k] << " ";
	}
}