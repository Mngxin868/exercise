#include<iostream>
using namespace std;

int arr[1001] = { 0 };

int main() {
	int n, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[temp]++;
		cout << arr[temp] << " ";
	}
	return 0;
}
