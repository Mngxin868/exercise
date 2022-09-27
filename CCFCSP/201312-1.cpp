#include<iostream>
using namespace std;

int arr[10001] = { 0 };

int main() {
	int n, num, max = 0, max_id = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[num]++;
		if (num > max) max = num;
	}
	num = max;
	max = 0;
	for (int i = 0; i <= num; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_id = i;
		}
	}
	cout << max_id;
	return 0;
}
