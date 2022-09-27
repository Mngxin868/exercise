#include<iostream>
using namespace std;

struct Window {
	int x1, x2, y1, y2;
	int pos;
};

void change(int x, int y, Window window[], int n) {
	int i = n - 1;
	Window temp;
	for (; i >= 0; i--) {
		if (window[i].x1 <= x && x <= window[i].x2 && window[i].y1 <= y && y <= window[i].y2) {
			cout << window[i].pos << endl;
			break;
		}
	}
	if (i < 0) {
		cout << "IGNORED" << endl;
	}
	else {
		for (int j = i; j < n - 1; j++) {
			temp = window[j];
			window[j] = window[j + 1];
			window[j + 1] = temp;
		}
	}
}

int main() {
	Window window[11];
	int N, M, x, y;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> window[i].x1 >> window[i].y1 >> window[i].x2 >> window[i].y2;
		window[i].pos = i + 1;
	}
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		change(x, y, window, N);
	}
	return 0;
}
