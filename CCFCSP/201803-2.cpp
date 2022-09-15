#include<iostream>
using namespace std;

int arr[101];
int speed[101];

int main() {
	int n, L, t;
	cin >> n >> L >> t;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		speed[i] = 1;
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
			arr[j] += speed[j];
			if (arr[j] == 0 || arr[j] == L) 
				speed[j] = -speed[j];
		}
		for (int j = 0; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[j] == arr[k]) {
					speed[j] = -speed[j];
					speed[k] = -speed[k];

				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
