#include <iostream>

using namespace std;

int main(void)
{
	int num;
	int array[10];
	int count = 0;
	for (int i = 0;i < 10;i++) {
		int j = 0;
		cin >> num;
		for (;j < count; j++) {
			if (array[j] == num % 42) {
				break;
			}
		}
		if (j == count) {
			array[j] = num % 42;
			count += 1;
		}
	}
	cout << count;
}