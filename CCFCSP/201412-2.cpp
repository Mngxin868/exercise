#include<iostream>
using namespace std;

int matrix[505][505];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int k = 0; k < 2 * n - 1; k++) {	//k为斜线的个数
		if (k % 2 == 0) {		//偶数向上
			for (int i = k; i >= 0; i--) {
				int j = k - i;
				if (i >= n) continue;
				if (j >= n) break;
				cout << matrix[i][j] << " ";
			}
		}
		else {					//奇数向下
			for (int j = k; j >= 0; j--) {
				int i = k - j;
				if (j >= n) continue;
				if (i >= n) break;
				cout << matrix[i][j] << " ";
			}
		}
	}
	return 0;
}
