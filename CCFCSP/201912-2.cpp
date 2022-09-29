#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	int ans[5] = { 0 };
	Point point[1001];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> point[i].x >> point[i].y;
	}
	for (int i = 0; i < n; i++) {
		int x = point[i].x;
		int y = point[i].y;
		int flag = 0, score = 0;
		for (int j = 0; j < n; j++) {
			if (point[j].x == x && point[j].y == y + 1) flag++;
			if (point[j].x == x + 1 && point[j].y == y) flag++;
			if (point[j].x == x && point[j].y == y - 1) flag++;
			if (point[j].x == x - 1 && point[j].y == y) flag++;
			if (point[j].x == x - 1 && point[j].y == y - 1) score++;
			if (point[j].x == x + 1 && point[j].y == y - 1) score++;
			if (point[j].x == x - 1 && point[j].y == y + 1) score++;
			if (point[j].x == x + 1 && point[j].y == y + 1) score++;
		}
		if (flag==4) {
			ans[score]++;
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
