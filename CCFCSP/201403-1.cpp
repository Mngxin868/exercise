#include<iostream>
using namespace std;

int arr[505] = { 0 };

int main() {
	int n, temp, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp < 0) arr[-temp]++;
		else arr[temp]++;
	}
	for (int i = 0; i < 505; i++) {
		if (arr[i] == 2) {
			num++;
		}
	}
	cout << num;
	return 0;
}
