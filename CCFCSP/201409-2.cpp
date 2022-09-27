#include<iostream>
using namespace std;

int map[101][101] = { 0 };

int main() {
	int n, x1, x2, y1, y2, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				map[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (map[i][j]) num++;
		}
	}
	cout << num;
	return 0;
}
