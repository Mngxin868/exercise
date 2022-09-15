#include<iostream>
using namespace std;

int main() {
	int n, k, temp = 0, ai, ans = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> ai;
		temp += ai;
		if (temp >= k) {
			ans++;
			temp = 0;
		}
		else if (i + 1 == n) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
