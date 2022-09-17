#include<iostream>
using namespace std;

int arr[1001];

int main() {
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) ans++;
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) ans++;
	}
	cout << ans;
	return 0;
}
