#include<iostream>
using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;
	while (n > 0) {
		ans += n % 10;
		n = n / 10;
	}
	cout << ans;
	return 0;
}
