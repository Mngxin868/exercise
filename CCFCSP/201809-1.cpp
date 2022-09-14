#include<iostream>
using namespace std;

int arr[1001];
int ans[1001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (i == 0)ans[0] = (arr[0] + arr[1]) / 2;
		else if (i == n - 1)ans[i] = (arr[i] + arr[i - 1]) / 2;
		else ans[i] = (arr[i] + arr[i - 1] + arr[i + 1]) / 3;
		cout << ans[i] << " ";
	}
	return 0;
}
