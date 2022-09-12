#include<iostream>
using namespace std;

int main() {
	long long int r, y, g, n, flag, value, time = 0, temp;
	cin >> r >> y >> g;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> flag >> value;
		temp = (time - value) % (r + y + g);
		if (flag == 0)time += value;
		if (flag == 1) {
			if (time < value) time = value;
			else {
				//temp = (time - value) % (r + y + g);
				if (temp >= g) {
					time += (r + y + g - temp);
				}
			}
		}
		if (flag == 2) {
			if (time < value + r) time = value + r;
			else {
				//temp = (time - value) % (r + y + g);
				if (temp < r)time += (r - temp);
				if (temp >= r + g) time += (r + y + g - temp + r);
			}
		}
		if (flag == 3) {
			if (time >= value) {
				//temp = (time - value) % (r + y + g);
				if (temp < y + r)time += (y + r - temp);
			}
		}
	}
	cout << time;
	return 0;
}
