#include<iostream>
using namespace std;

int main() {
	int seat[105] = { 0 };
	int pai[25];
	int n, temp;
	cin >> n;
	for (int i = 0; i < 20; i++) {
		pai[i] = 5;
	}
	for (int i = 0; i < n; i++) {
		cin >> temp;
		for (int j = 0; j < n; j++) {
			if (temp <= pai[j]) {
				for (int k = 0; k < temp; k++) {
					cout << j * 5 + k + 1 + (5 - pai[j]) << " ";
					seat[j * 5 + k + 1 + (5 - pai[j])] = 1;
				}
				pai[j] -= temp;
				cout << endl;
				temp = 0;
				break;
			}
		}
		if (temp) {
			for (int j = 1, k = 0; k < temp; j++) {
				if (!seat[j]) {
					cout << j << " ";
					seat[j] = 1; k++;
					pai[(j - 1) / 5]--;
				}
			}
			cout << endl;
		}
	}
	return 0;
}
