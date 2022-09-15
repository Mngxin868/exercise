#include<iostream>
using namespace std;

int main() {
	int ans = 0, now, before = 0, goal = 0;
	while (1) {
		cin >> now;
		if (now == 0) break;
		if (now == 1) {
			ans++;
			before = 0;
			goal = 0;
		}
		if (now == 2) {
			if (before == 0) {
				before = 1;
				goal = 2;
				ans += goal;
			}
			else if (before) {
				goal += 2;
				ans += goal;
			}
		}
	}
	cout << ans;
	return 0;
}
