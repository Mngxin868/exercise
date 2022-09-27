#include<iostream>
using namespace std;

int arr[10001] = { 0 };

int main() {
	int n, temp, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[temp] = 1;
	}
	for (int i = 0; i < 10000; i++) {
		if (arr[i] && arr[i + 1]) num++;
	}
	cout << num;
	return 0;
}
