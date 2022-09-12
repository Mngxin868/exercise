#include<iostream>
using namespace std;

int main() {
	int r, y, g, n, flag, value, time = 0;
	cin >> r >> y >> g;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> flag >> value;
		if (flag == 0)time += value;
		if (flag == 1)time += value;
		if (flag == 2)time += (value + r);
	}
	cout << time;
	return 0;
}
