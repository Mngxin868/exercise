#include<iostream>
#include<stdlib.h>
using namespace std;

int arr[1001];

int main() {
	int n, min = INT_MAX;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((abs)(arr[i] - arr[j]) < min)
				min = (abs)(arr[i] - arr[j]);
		}
	}
	cout << min;
	return 0;
}
