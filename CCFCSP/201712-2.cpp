#include<iostream>
using namespace std;

int person[1001];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		person[i] = 1;
	}
	int num = 1;
	for (int i = 0, j = n; j != 1; i = (i + 1) % n) {
		if (person[i]) {
			if (num % k == 0 || num % 10 == k) {
				person[i] = 0; j--;
			}
			num++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (person[i]) {
			cout << i + 1; break;
		}
	}
	return 0;
}
