#include<iostream>
using namespace std;

int que[1001];

int main() {
	int n, m, id, way;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		que[i] = i + 1;
	}
	for (int i = 0; i < m; i++) {
		cin >> id >> way;
		int j = 0;
		for (; j < n; j++) {
			if (que[j] == id) break;
		}
		if (way >= 0) {
			for (int k = 0; k < way; k++) {
				que[j] = que[j + 1];
				j++;
			}
		}
		else {
			for (int k = 0; k < -way; k++) {
				que[j] = que[j - 1];
				j--;
			}
		}
		que[j] = id;
	}
	for (int k = 0; k < n; k++) {
		cout << que[k] << " ";
	}
	return 0;
}
