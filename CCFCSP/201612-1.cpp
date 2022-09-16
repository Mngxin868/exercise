#include<iostream>
using namespace std;

int arr[1001];

int main() {
	int n, sma, big;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i = 0;
	for (; i < n; i++) {
		sma = 0; big = 0;
		for (int k = 0; k < i; k++) {
			if (arr[i] > arr[k])sma++;
			if (arr[i] < arr[k])big++;
		}
		for (int k = i + 1; k < n; k++) {
			if (arr[i] > arr[k])sma++;
			if (arr[i] < arr[k])big++;
		}
		if (sma == big) {
			cout << arr[i];
			break;
		}
	}
	if (i == n) {
		cout << -1;
	}
	return 0;
}
