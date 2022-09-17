#include<iostream>
using namespace std;

int num[32][32];
int flag[32][32] = { 0 };

int main() {
	int n, m, temp;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> num[i][j];
		}
	}
	for (int i = 0; i < n; i++) {		//行检索
		temp = 1;
		for (int j = 1; j < m; j++) {
			if (num[i][j] == num[i][j - 1]) {
				temp++;
				if (j + 1 == m) {
					if (temp >= 3) {
						for (int k = 0; k < temp; k++) {
							flag[i][j - k] = 1;
						}
					}
				}
			}
			else {
				if (temp >= 3) {
					for (int k = 0; k < temp; k++) {
						flag[i][j - 1 - k] = 1;
					}
				}
				temp = 1;
			}
		}
	}
	for (int i = 0; i < m; i++) {		//列检索
		temp = 1;
		for (int j = 1; j < n; j++) {
			if (num[j][i] == num[j - 1][i]) {
				temp++;
				if (j + 1 == n) {
					if (temp >= 3) {
						for (int k = 0; k < temp; k++) {
							flag[j - k][i] = 1;
						}
					}
				}
			}
			else {
				if (temp >= 3) {
					for (int k = 0; k < temp; k++) {
						flag[j - 1 - k][i] = 1;
					}
				}
				temp = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (flag[i][j])cout << "0 ";
			else cout << num[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
