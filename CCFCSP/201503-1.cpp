#include<iostream>
using namespace std;

int arr[1001][1001];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = m - 1; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
