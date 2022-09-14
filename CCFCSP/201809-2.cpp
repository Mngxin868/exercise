#include<iostream>
using namespace std;

int arr[1000001] = { 0 };

int main() {
	int n, x, y, ans = 0;
	cin >> n;
	for (int i = 0; i < 2 * n; i++) {
		cin >> x >> y;
		for (int j = x; j < y; j++) {
			arr[j]++;
		}
	}
	for (int i = 0; i < 1000001; i++) {
		if (arr[i] == 2)ans++;
	}
	cout << ans;
	return 0;
}
