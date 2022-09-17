#include<iostream>
using namespace std;

int main() {
	int n, ans = 1, bef, aft;
	cin >> n;
	cin >> bef;
	for (int i = 1; i < n; i++) {
		cin >> aft;
		if (bef != aft)ans++;
		bef = aft;
	}
	cout << ans;
	return 0;
}
