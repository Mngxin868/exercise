#include<iostream>
using namespace std;

int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int main() {
	int year, date;
	cin >> year >> date;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		arr[1] += 1;
	}
	int i = 0;
	for (; i < 12; i++) {
		if (date > arr[i]) {
			date -= arr[i];
		}
		else break;
	}
	cout << i + 1 << endl;
	cout << date;
	return 0;
}
